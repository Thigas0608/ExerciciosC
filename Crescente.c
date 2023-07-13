#include <stdio.h>

int main(void) {

  int X, Y; 

  printf("Digite dois numeros:\n");
  scanf("%d", &X);
  scanf("%d", &Y);

  while(X != Y){
      if(X > Y) {
      printf("DECRECENTE!\n");
  }
  else{
      printf("CRECENTE!\n");
  }
      printf("Digite outros dois numeros:\n");
      scanf("%d", &X);
      scanf("%d", &Y);  
  }
  
  
  return 0;
}