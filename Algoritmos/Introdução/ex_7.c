#include <stdio.h>
#include <math.h>

int main ()
{ float reais,dolares;
  printf("Digite o valor em reais: R$");
  scanf("%f",&reais);
  dolares=reais/5.25;
  printf("R$%.2f é igual a US$%.2f",reais,dolares);
  return 0;
}