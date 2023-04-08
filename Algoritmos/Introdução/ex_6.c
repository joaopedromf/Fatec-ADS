#include <stdio.h>
#include <math.h>

int main ()
{ float reais,dolares;
  printf("Digite o valor em dólares: US$");
  scanf("%f",&dolares);
  reais=dolares*5.25;
  printf("US$%.2f é igual a R$%.2f",dolares,reais);
  return 0;
}