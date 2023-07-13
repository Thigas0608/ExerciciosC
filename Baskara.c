#include <stdio.h>
#include <math.h>

int main(void) {

  double x1, x2, a, b, c, delta;

  printf("coeficiente A: ");
  scanf("%lf", &a);
  printf("coeficiente B: ");
  scanf("%lf", &b);
  printf("coeficiente C: ");
  scanf("%lf", &c);

  delta = b * b - 4 * a * c;

  if(a == 0 || delta < 0){
    printf("Essa equação não possui delta");
  }
  else{
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("X1 = %.4lf\n", x1);
    printf("X2 = %.4lf\n", x2);
  }

  return 0;
}