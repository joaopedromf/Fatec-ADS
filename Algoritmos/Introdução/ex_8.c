#include <stdio.h>
#include <math.h>

int main ()
{ float base,altura,area,perimetro;
  printf("Digite o valor da base: ");
  scanf("%f",&base);
  printf("Digite o valor da altura: ");
  scanf("%f",&altura);
  area=base*altura;
  perimetro=2*(base+altura);
  printf("Área = %.1f\n",area);
  printf("Perímetro = %.1f",perimetro);
}