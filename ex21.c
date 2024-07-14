#include <stdio.h>

#define TAMANHO 10

int main() {
  int codigo;
  float vetor[TAMANHO];

  printf("Digite %d numeros reais:\n", TAMANHO);
  for (int i = 0; i < TAMANHO; i++) {
    scanf("%f", &vetor[i]);
  }

  printf("Digite um codigo numerico (0 para sair, 1 para mostrar direto, 2 para mostrar inverso):\n");
  scanf("%d", &codigo);

  switch (codigo) {
  case 0:

    printf("Programa encerrado.\n");
    break;
  case 1:

    printf("Vetor na ordem direta:\n");
    for (int i = 0; i < TAMANHO; i++) {
      printf("%.2f ", vetor[i]);
    }
    printf("\n");
    break;
  case 2:

    printf("Vetor na ordem inversa:\n");
    for (int i = TAMANHO - 1; i >= 0; i--) {
      printf("%.2f ", vetor[i]);
    }
    printf("\n");
    break;
  default:
    printf("Codigo invalido. Programa encerrado.\n");
    break;
  }

  return 0;
}
