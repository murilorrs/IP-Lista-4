#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int resultados[20];
  int frequencia[6 + 1] = {0};

  srand(time(NULL));

  printf("Numeros sorteados:\n");
  for (int i = 0; i < 20; i++) {
    resultados[i] = rand() % 6 + 1;
    printf("%d ", resultados[i]);
    frequencia[resultados[i]]++;
  }
  printf("\n");

  printf("Frequencia dos numeros sorteados:\n");
  for (int i = 1; i <= 6; i++) {
    printf("Numero %d: %d vezes\n", i, frequencia[i]);
  }

  return 0;
}
