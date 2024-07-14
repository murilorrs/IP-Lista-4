#include <stdio.h>

int main() {
  int A[10], i, j;
  int repeticoes[10] = {0};

  printf("Digite 10 numeros:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &A[i]);
  }

  for (i = 0; i < 10; i++) {
    for (j = i + 1; j < 10; j++) {
      if (A[i] == A[j]) {
        repeticoes[i]++;
        if (repeticoes[i] == 1) {
          repeticoes[i]++;
        }
      }
    }
  }

  printf("Elementos repetidos e suas quantidades:\n");
  for (i = 0; i < 10; i++) {
    if (repeticoes[i] > 1) {
      printf("Numero %d se repete %d vezes\n", A[i], repeticoes[i]);
    }
  }

  return 0;
}
