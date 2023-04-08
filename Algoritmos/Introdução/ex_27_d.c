#include <stdio.h>
int main () 
{ int i;
  float soma=0;
  for (i=2;i<=100;i++)
  { if (i%2==0)
    { soma=soma+1.0/i;
      printf("+ 1/%d ",i);
    }
    else
    { soma=soma-1.0/i;
      printf("- 1/%d ",i);
    }
  }
  printf("= %f",soma);
  return 0;
}