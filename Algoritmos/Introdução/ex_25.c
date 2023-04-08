#include <stdio.h>
int main () 
{ int n,i,i2,soma=0;
  printf("Digite um número: ");
  scanf("%d",&n);
  for (i=0;i<=n;i++)
  { i2=i*i;
    soma=soma+i2;
    if (i!=n)
    { printf("%d + ",i2);
    }
    else
    { printf("%d ",i2);
    }
  }
  printf("= %d",soma);
  return 0;
}