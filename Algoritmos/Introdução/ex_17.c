#include <stdio.h>
#include <math.h>

int main ()
{ float a,b,c;
  printf("Digite o primeiro lado: ");
  scanf("%f",&a);
  printf("Digite o segundo lado: ");
  scanf("%f",&b);
  printf("Digite o terceiro lado: ");
  scanf("%f",&c);
  if ((a<b+c)&&(b<a+c)&&(c<a+b))
  { printf("\nÉ triângulo, ");
    if ((pow(a,2)==pow(b,2)+pow(c,2))||(pow(b,2)==pow(a,2)+pow(c,2))||(pow(c,2)==pow(a,2)+pow(b,2)))
    { printf("É triângulo retângulo, ");
    }
    else
    { printf("Não é triângulo retângulo, ");
    }
    if ((a==b)&&(b==c))
    { printf("É triângulo equilátero."); 
    }
    else if ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
    { printf("É triângulo isósceles.");
    }
    else if ((a!=b)&&(a!=c)&&(b!=c))
    { printf("É triângulo escaleno.");
    }
  }
  else
  { printf("\nNão é triângulo.");
  }
  return 0;
}