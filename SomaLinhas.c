#include <stdio.h>

int main(void) {

  int N,M,j;
  double soma1, soma2;
  
  printf("Qual a quantidade de linhas da matriz? ");
  scanf("%d", &M);
  printf("Qual a quantidade de colunas da matriz? ");
  scanf("%d", &N);

  double mat[M][N];
  double vet[M];

  printf("===================================================\n");
  for(int i = 0; i < M; i++){
    printf("Digite os elementos da %da. linha:\n", i + 1);
    for(int j = 0; j < N; j++){
      scanf("%lf", &mat[i][j]);
    }
    printf("===================================================\n");
  }

  
  for(int i = 0; i < M; i++){
    vet[i] = 0;
    for(int j = 0; j < N; j++){
      vet[i] = vet[i] + mat[i][j];
    }
  }

  
  for(int i = 0; i < M; i++){
    printf("Soma da %da. linha: ", i + 1);
    printf("%.1lf\n", vet[i]);
  }
  
  return 0;
}