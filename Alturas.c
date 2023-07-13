#include <stdio.h>
#include <math.h>
#include <string.h>

void ler_texto(char *buffer, int length) {
      fgets(buffer, length, stdin); 
      strtok(buffer, "\n"); 
}

void limpar_entrada() { 
 char c; 
 while ((c = getchar()) != '\n' && c != EOF) {} 
} 

int main(void) {

  int N,i,contMenores;
  double soma, mediaA,menor;

  
  printf("Quantas pessoas serão digitadas? ");
  scanf("%d", &N);
  
  
  char nome[N] [50];
  int idade[N];
  double altura[N];

  
  for(i = 0; i < N; i++){
    printf("Dados da %d° pessoa:\n", i+1);
    printf("Nome: ");
    limpar_entrada();
    ler_texto(nome[i], 50); 
    printf("Idade: ");
    scanf("%d", &idade[i]);
    printf("Altura: ");
    scanf("%lf", &altura[i]);    
  }

  
  soma = 0;
  for(i = 0;i < N; i++){
    soma = soma + altura[i];
  }


  printf("\n");
  mediaA = soma / N;
  printf("Altura média: %.2lf\n", mediaA);
  
  
  contMenores = 0; 
  for(i = 0; i < N; i++){
    if(idade[i] < 16){
      contMenores = contMenores + 1;
    }
  }
  menor = (double) contMenores * 100 / N;


  printf("Pessoas com menos de 16 anos: %.1lf%%\n", menor);
  
  limpar_entrada();
  for(i = 0; i < N; i++){
    if(idade[i] < 16){
      printf("%s\n", nome[i]);
    }
  }
  

  return 0;
}