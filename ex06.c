#include <stdio.h>

int main() {
  int vet[100];
  int i;

  for (i = 0; i < 100; i++) {
    vet[i] = 100 - i;
  }

  printf("Elementos do vetor em ordem decrescente:\n");
  for (i = 0; i < 100; i++) {
    printf("%d ", vet[i]);
  }
  printf("\n");

  return 0;
}
