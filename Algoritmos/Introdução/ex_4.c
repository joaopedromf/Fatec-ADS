#include <stdio.h>
#include <math.h>

int main ()
{ float fahrenheit,celsius;
  printf("Digite a temperatura em graus Celsius: ");
  scanf("%f",&celsius);
  fahrenheit=9*celsius/5+32;
  printf("A temperatura em graus Fahrenheit é igual a %.1f",fahrenheit);
  return 0;
}