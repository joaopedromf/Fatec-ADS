#include <stdio.h>
#include <math.h>

int main ()
{ float a,b,c,p,area;
  printf("Digite o valor do primeiro lado: ");
  scanf("%f",&a);
  printf("Digite o valor do segundo lado: ");
  scanf("%f",&b);
  printf("Digite o valor do terceiro lado: ");
  scanf("%f",&c);
  p=(a+b+c)/2;
  area=sqrt(p*(p-a)*(p-b)*(p-c));
  printf("Área = %.2f",area);
  return 0;
}