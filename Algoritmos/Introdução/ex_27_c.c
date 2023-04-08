#include <stdio.h>
int main () 
{ int i;
  float soma=0;
  for (i=2;i<=100;i++)
  { soma=soma+1.0/i;
    if (i!=100)
    { printf("1/%d + ",i);
    }
    else
    { printf("1/%d ",i);
    }
  }
  printf("= %f",soma);
  return 0;
}