#include <stdio.h>

#define MAX_EMPLOYEES 100

struct Empregado {
  int numero;
  int meses;
};

void bubbleSort(struct Empregado arr[], int n) {
  int i, j;
  struct Empregado temp;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j].meses < arr[j + 1].meses) {
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main() {
  struct Empregado empregados[MAX_EMPLOYEES];
  int count = 0, i;

  printf("Digite o numero do empregado e os meses de trabalho (0 0 para encerrar):\n");

  do {
    scanf("%d %d", &empregados[count].numero, &empregados[count].meses);
    count++;
  } while (empregados[count - 1].numero != 0 || empregados[count - 1].meses != 0);

  bubbleSort(empregados, count - 1);

  printf("Os tres empregados mais recentes na firma:\n");
  for (i = 0; i < 3 && i < count - 1; i++) {
    printf("Numero: %d, Meses de trabalho: %d\n", empregados[i].numero, empregados[i].meses);
  }

  return 0;
}
