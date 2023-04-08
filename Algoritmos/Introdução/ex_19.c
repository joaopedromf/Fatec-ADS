#include <stdio.h>
#include <math.h>

int main ()
{ float n1,n2,n3,nf,maior,menor;
  printf("Digite a primeira nota: ");
  scanf("%f",&n1);
  printf("Digite a segunda nota: ");
  scanf("%f",&n2);
  printf("Digite a terceira nota: ");
  scanf("%f",&n3);
  maior=n1;
  menor=n1;
  if (n2>n1)
  { maior=n2;
  }
  else if (n2<n1)
  { menor=n2;
  }
  if (n3>n1)
  { maior=n3;
  }
  else if (n3<n1)
  { menor=n3;
  }
  nf=(maior+menor)/2;
  printf("Nota Final = %f",nf);
  return 0;
}