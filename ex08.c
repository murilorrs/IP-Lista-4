#include <math.h>
#include <stdio.h>

int main() {
  int numeros[15];
  double raizes[15];
  int i;

  printf("Digite quinze numeros int:\n");
  for (i = 0; i < 15; i++) {
    scanf("%d", &numeros[i]);
  }

  for (i = 0; i < 15; i++) {
    if (numeros[i] < 0) {
      raizes[i] = -1;
    } else {
      raizes[i] = sqrt(numeros[i]);
    }
  }

  printf("Valores no vetor\n");
  for (i = 0; i < 15; i++) {
    if (raizes[i] == -1) {
      printf("-1 ");
    } else {
      printf("%.2f ", raizes[i]);
    }
  }

  return 0;
}
