#include <stdio.h>

int main() {
  int vetor1[10], vetor2[5];
  int vetorPares[10], vetorImpares[10];
  int i, j, soma, indexPares = 0, indexImpares = 0;

  for (i = 0; i < 10; i++) {
    printf("Digite o numero %d do primeiro vetor: ", i + 1);
    scanf("%d", &vetor1[i]);
  }

  for (i = 0; i < 5; i++) {
    printf("Digite o numero %d do segundo vetor: ", i + 1);
    scanf("%d", &vetor2[i]);
  }

  for (i = 0; i < 10; i++) {
    soma = vetor1[i];
    for (j = 0; j < 5; j++) {
      soma += vetor2[j];
    }
    if (vetor1[i] % 2 == 0) {
      vetorPares[indexPares++] = soma;
    } else {
      vetorImpares[indexImpares++] = soma;
    }
  }

  printf("Primeiro vetor resultante (pares somados ao segundo vetor):\n");
  for (i = 0; i < indexPares; i++) {
    printf("%d ", vetorPares[i]);
  }
  printf("\n");

  printf("Segundo vetor resultante (impares somados ao segundo vetor):\n");
  for (i = 0; i < indexImpares; i++) {
    printf("%d ", vetorImpares[i]);
  }
  printf("\n");

  return 0;
}
