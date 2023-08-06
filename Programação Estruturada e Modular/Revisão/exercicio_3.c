//3. Dado um número natural na base decimal, transformá-lo para a base binária.
#include <stdio.h>
int main()
{ int n,mult=1,soma=0;
  printf("Digite um número: ");
  scanf("%d",&n);
  while(n>0)
  { soma=soma+n%2*mult;
    mult=mult*10;
    n=n/2;
  }
  printf("Binário: %d",soma);
  return 0;
}