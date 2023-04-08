#include <stdio.h>
#include <math.h>

int main ()
{ float a,b,c;
  printf("Digite a primeira medida: ");
  scanf("%f",&a);
  printf("Digite a segunda medida: ");
  scanf("%f",&b);
  printf("Digite a terceira medida: ");
  scanf("%f",&c);
  if ((a==b)&&(b==c))
  { printf("Plano");
  }
  else if ((a<b)&&(b<c))
  { printf("Subindo");
  }
  else if ((a>b)&&(b>c))
  { printf("Descendo");
  }
  else
  { printf("n.d.a");
  }
  return 0;
}