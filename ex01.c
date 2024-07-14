#include <stdio.h>

int main() {
  int vetor[10], i, existeSuperior = 0;

  for (i = 0; i < 10; i++) {
    printf("Digite o numero %d: ", i + 1);
    scanf("%d", &vetor[i]);
  }

  for (i = 0; i < 10; i++) {
    if (vetor[i] > 50) {
      printf("Numero %d na posicao %d\n", vetor[i], i);
      existeSuperior = 1;
    }
  }

  if (!existeSuperior) {
    printf("Nao existe nenhum numero superior a 50\n");
  }

  return 0;
}