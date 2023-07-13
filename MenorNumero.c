#include <stdio.h>

int main(void) {

  int a, b, c, menor;
  
  printf("Primeiro numero: ");
  scanf("%d", &a);
  printf("Segundo numero: ");
  scanf("%d", &b);
  printf("Terceiro numero: ");
  scanf("%d", &c);

  if (a < b && a < c){
    menor = a;
  }
  else if(b < c){
    menor = b;
  }
  else{
    menor = c;
  }

  printf("MENOR %d", menor);
  
  return 0;
}