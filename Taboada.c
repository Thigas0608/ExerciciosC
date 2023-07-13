#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {

int N;
int i;
int x;
int l;  
int resultado;

 printf("Qual tabuada deseja: ");
 scanf("%d", &N);

 printf("Qual limite deseja: ");
 scanf("%d", &l); 
 printf("\n");

 for(i = 1; i <= l; i++){
   resultado = i * N;
   printf("%d x %d : %d\n",i,N,resultado); 
 } 
  
   return 0;
}