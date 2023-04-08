#include <stdio.h>

int main ()
{ int a,b,c;
  printf("Digite um número: ");
  scanf("%d",&a);
  printf("Digite outro número: ");
  scanf("%d",&b);
  c=a+b;
  printf("A soma de %d com %d é igual a %d.",a,b,c);
  return 0;
}
