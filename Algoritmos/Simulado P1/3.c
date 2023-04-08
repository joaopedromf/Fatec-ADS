#include <stdio.h>
int main ()
{ int n,i;
  printf("Digite um número: ");
  scanf("%d",&n);
  printf("-%d: ",n);
  for (i=1;i<=n;i++)
  { if (n%i==0)
    { if (i!=n)
      { printf("%d, ",i);
      }
      else
      { printf("%d",i);
      }
    }
  }
  return 0;
}