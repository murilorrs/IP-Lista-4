#include <stdbool.h>
#include <stdio.h>

#define TAMANHO 10

int main() {
  int vetor[TAMANHO];
  int primos[TAMANHO];
  int posicoes[TAMANHO];
  int count = 0;
  printf("Digite os %d elementos do vetor:\n", TAMANHO);
  for (int i = 0; i < TAMANHO; i++) {
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < TAMANHO; i++) {
    int numero = vetor[i];
    bool ehPrimo = true;

    if (numero <= 1) {
      ehPrimo = false;
    } else {
      for (int j = 2; j * j <= numero; j++) {
        if (numero % j == 0) {
          ehPrimo = false;
          break;
        }
      }
    }

    if (ehPrimo) {
      primos[count] = numero;
      posicoes[count] = i;
      count++;
    }
  }
  printf("Numeros primos e suas posicoes:\n");
  for (int i = 0; i < count; i++) {
    printf("Numero primo: %d, Posicao: %d\n", primos[i], posicoes[i]);
  }

  return 0;
}
