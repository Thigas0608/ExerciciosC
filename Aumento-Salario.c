#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    
  double salario;
  double aumento;
  double nsalario;
  int porcentagem; 
  
  printf("Digite o salario da pessoa: ");
  scanf("%lf", &salario);  

  if(salario <= 1000){
    porcentagem = 20;
  }   
  
  else if(salario <= 3000){
    porcentagem = 15;
  } 

  else if(salario <= 8000){
    porcentagem = 10;
  }
  
  else{
    porcentagem = 5;
  }

  aumento = (salario * porcentagem) / 100;
  
  nsalario = salario + aumento;

  printf ("Novo salario: R$ %.2lf\n", nsalario );
  printf("Aumento: %.2lf\n",aumento);
  printf("Porcentagem: %d%%", porcentagem);

  return 0;
}