#include <stdio.h>
int main ()
{ int i,n,maior,menor;
  for (i=1;i<=10;i++)
  { printf("Digite o %dº número: ",i);
    scanf("%d",&n);
    if(n>maior||i==1)
    { maior = n;
    }
    if (n<menor||i==1)
    { menor = n;
    }
  }
  printf("\nMaior número: %d\nMenor número: %d",maior,menor);
  return 0;
}