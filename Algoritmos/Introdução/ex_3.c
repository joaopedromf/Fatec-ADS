#include <stdio.h>
#include <math.h>

int main ()
{ float peso,altura,imc;
  printf("Digite seu peso (kg): ");
  scanf("%f",&peso);
  printf("Digite sua altura (m): ");
  scanf("%f",&altura);
  imc=peso/pow(altura,2);
  printf("Seu IMC é igual a %.1f",imc);
  return 0;
}