#include <stdio.h>

int main() {
  float alturas[10], soma = 0, media;

  printf("Digite as alturas de 10 atletas:\n");
  for (int i = 0; i < 10; i++) {
    scanf("%f", &alturas[i]);
    soma += alturas[i];
  }

  media = soma / 10;

  printf("Alturas maiores do que a media (%.2f):\n", media);
  for (int i = 0; i < 10; i++) {
    if (alturas[i] > media) {
      printf("%.2f\n", alturas[i]);
    }
  }

  return 0;
}
