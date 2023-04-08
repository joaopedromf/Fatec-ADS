#include <stdio.h>
int main () 
{ int i,soma=0;
  for (i=2;i<=1000;i=i+2)
  { soma=soma+i;
    if (i!=1000)
    { printf("%d + ",i);
    }
    else
    { printf("%d ",i);
    }
  }
  printf("= %d",soma);
  return 0;
}