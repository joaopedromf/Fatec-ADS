#include <stdio.h>
#include <math.h>

int main ()
{ float a,b,c,delta,x1,x2;
  printf("Digite o valor de ax²: ");
  scanf("%f",&a);
  printf("Digite o valor de bx: ");
  scanf("%f",&b);
  printf("Digite o valor de c: ");
  scanf("%f",&c);
  delta=pow(b,2)-4*a*c;
  printf("\nEquação: %.0fx² + %.0fx + %.0f = 0\n",a,b,c);
  printf("Delta = %.1f\n",delta);
  if (a==0)
  { printf("Não é equação do segundo grau.");
  }
  else if (delta>=0)
  { x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("x1 = %.1f\nx2 = %.1f",x1,x2);
  }
  else
  { printf("Não existem raízes reais.");
  }
  return 0;
}