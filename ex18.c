#include <stdio.h>

#define TAMANHO 10

int main() {
  int vetor[TAMANHO];

  printf("Digite os %d numeros inteiros em ordem crescente:\n", TAMANHO);
  for (int i = 0; i < TAMANHO; i++) {
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < TAMANHO; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}
