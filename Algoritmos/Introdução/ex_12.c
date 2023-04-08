#include <stdio.h>

int main ()
{ int n;
  printf("Digite um número: ");
  scanf("%d",&n);
  if (n>0)
  { printf("%d é um número positivo.",n);
  }
  else if (n<0)
  { printf("%d é um número negativo.",n);
  }
  else
  { printf("%d é um número nulo.",n);
  }
  return 0;
}