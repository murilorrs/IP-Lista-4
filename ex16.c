#include <stdio.h>

#define TAMANHO 50

int main() {
  int idades[TAMANHO] = {23, 25, 27, 30, 23, 22, 25, 28, 23, 25, 23, 27, 30, 23, 22, 25, 28, 23, 25, 27, 30, 23, 22, 25, 28,
                         23, 25, 27, 30, 23, 22, 25, 28, 23, 25, 27, 30, 23, 22, 25, 28, 23, 25, 27, 30, 23, 22, 25, 28};

  int frequencia[TAMANHO] = {0};
  int moda = idades[0];
  int maxFrequencia = 1;

  for (int i = 0; i < TAMANHO; i++) {
    frequencia[idades[i]]++;
  }

  for (int i = 0; i < TAMANHO; i++) {
    if (frequencia[idades[i]] > maxFrequencia) {
      maxFrequencia = frequencia[idades[i]];
      moda = idades[i];
    }
  }

  printf("A moda das idades e: %d\n", moda);

  return 0;
}
