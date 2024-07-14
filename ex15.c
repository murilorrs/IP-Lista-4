#include <stdio.h>

#define TAMANHO 5

int main() {
  int vetorOriginal[TAMANHO];
  int vetorTransformado[TAMANHO];
  int i;

  printf("Digite os %d numeros inteiros do vetor:\n", TAMANHO);
  for (i = 0; i < TAMANHO; i++) {
    scanf("%d", &vetorOriginal[i]);
  }

  for (i = 0; i < TAMANHO; i++) {
    if (i % 2 == 0) {
      vetorTransformado[i] = vetorOriginal[i] * 2;
    } else {
      vetorTransformado[i] = vetorOriginal[i] * 3;
    }
  }

  printf("Vetor transformado:\n");
  for (i = 0; i < TAMANHO; i++) {
    printf("%d ", vetorTransformado[i]);
  }
  printf("\n");

  return 0;
}
