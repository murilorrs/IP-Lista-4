#include <stdio.h>

#define TAMANHO 10

int main() {
  int vetor1[TAMANHO], vetor2[TAMANHO];
  int vetorResultado[2 * TAMANHO];
  int i, j, k;

  printf("Digite os elementos do primeiro vetor:\n");
  for (i = 0; i < TAMANHO; i++) {
    scanf("%d", &vetor1[i]);
  }

  printf("Digite os elementos do segundo vetor:\n");
  for (i = 0; i < TAMANHO; i++) {
    scanf("%d", &vetor2[i]);
  }

  i = 0;
  j = 0;
  k = 0;

  while (i < TAMANHO && j < TAMANHO) {
    vetorResultado[k++] = vetor1[i++];
    vetorResultado[k++] = vetor2[j++];
  }

  while (i < TAMANHO) {
    vetorResultado[k++] = vetor1[i++];
  }

  while (j < TAMANHO) {
    vetorResultado[k++] = vetor2[j++];
  }

  printf("Vetor resultante da intercalacao:\n");
  for (i = 0; i < 2 * TAMANHO; i++) {
    printf("%d ", vetorResultado[i]);
  }
  printf("\n");

  return 0;
}
