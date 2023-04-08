#include <stdio.h>
int main ()
{ int n,i,f=1;
  printf("Digite um número: ");
  scanf("%d",&n);
  printf("%d! = ",n);
  for (i=n;i>=1;i--)
  { f=f*i;
    if (i!=1)
    { printf("%d * ",i);
    }
    else
    { printf("%d ",i);
    }
  }
  printf("= %d",f);
  return 0;
}