#include <stdio.h>

int main() {
  int vetor[10], i, menorElemento, posicao;

  printf("Digite 10 numeros:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetor[i]);
  }

  menorElemento = vetor[0];
  posicao = 0;

  for (i = 1; i < 10; i++) {
    if (vetor[i] < menorElemento) {
      menorElemento = vetor[i];
      posicao = i;
    }
  }

  printf("O menor elemento do vetor e %d e sua posicao dentro do vetor e: %d\n", menorElemento, posicao);

  return 0;
}
