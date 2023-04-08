#include <stdio.h>
#include <math.h>

int main ()
{ float fahrenheit,celsius;
  printf("Digite a temperatura em graus Fahrenheit: ");
  scanf("%f",&fahrenheit);
  celsius=(fahrenheit-32)*5/9;
  printf("A temperatura em graus Celsius é igual a %.1f",celsius);
  return 0;
}