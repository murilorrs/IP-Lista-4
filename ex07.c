#include <stdio.h>

int main() {
  int vetor[100];
  int i;

  for (i = 0; i < 100; i++) {
    vetor[i] = 2 * i + 1; // definicao p todo impar by prof Juliano
  }

  for (i = 0; i < 100; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");

  return 0;
}
