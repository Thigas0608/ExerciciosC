#include <stdio.h>

int main(void) {

  int N,i;
  double soma, media;
  
  printf("Quantos numeros você vai digitar? ");
  scanf("%d", &N);

  double vet[N];
  for(i = 0; i < N; i++){
    printf("Digite um numero: ");
    scanf("%lf", &vet[i]);
  }

  printf("\nVALORES = ");
  for(i = 0; i < N; i++){
    printf("%.1lf  ", vet[i]);  
  }

  printf("\n");
  for(i = 0; i < N; i++){
    soma = soma + vet[i];
  }
  printf("\nSOMA = %.2lf", soma);
  
  media = soma / N;
  printf("\nMEDIA = %.2lf", media);
  
  return 0;
}