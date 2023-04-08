#include <stdio.h>
int main ()
{ int n,i,i2=1;
  printf("Digite um número: ");
  scanf("%d",&n);
  for (i=n;i>=1;i--)
  { i2=i2*i;
    if (i!=1)
    { printf("%d * ",i);
    }
    else
    { printf("%d ",i);
    }
  }
  printf("= %d",i2);
  return 0;
}