#include <stdio.h>
int main ()
{ int n,i,i2=0;
  printf("Digite um número: ");
  scanf("%d",&n);
  printf("-%d: ",n);
  for (i=1;i<=n;i++)
  { if (n%i==0)
    { i2=i2+1;
    }
  }
  if (i2==2)
  { printf("É primo");
  }
  else
  { printf("Não é primo");
  }
  return 0;
}