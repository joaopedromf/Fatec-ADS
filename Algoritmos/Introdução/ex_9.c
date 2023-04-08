#include <stdio.h>
#include <math.h>

int main ()
{ float raio,area,circunferencia;
  printf("Digite o valor do raio do círculo: ");
  scanf("%f",&raio);
  area=M_PI*pow(raio,2);
  circunferencia=2*M_PI*raio;
  printf("Área = %.2f\nCircunferência = %.2f",area,circunferencia);
  return 0;
}