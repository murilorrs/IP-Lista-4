#include <stdio.h>

int main() {
  int numeros[10];
  int i, somaPares = 0, quantidadeImpares = 0;

  printf("Digite 10 numeros inteiros:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &numeros[i]);
  }

  printf("Numeros pares digitados: ");
  for (i = 0; i < 10; i++) {
    if (numeros[i] % 2 == 0) {
      printf("%d ", numeros[i]);
      somaPares += numeros[i];
    }
  }
  printf("\nSoma dos numeros pares digitados: %d\n", somaPares);

  printf("Numeros impares digitados: ");
  for (i = 0; i < 10; i++) {
    if (numeros[i] % 2 != 0) {
      printf("%d ", numeros[i]);
      quantidadeImpares++;
    }
  }
  printf("\nQuantidade de numeros impares digitados: %d\n", quantidadeImpares);

  return 0;
}
