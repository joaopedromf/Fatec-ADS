#include <stdio.h>
#include <math.h>

int main ()
{ float frente,esquerda,direita;
  printf("Digite a distância do obstáculo à frente: ");
  scanf("%f",&frente);
  if (frente>50)
  { printf("Frente");
  }
  else
  { printf("Digite a distância à direita: ");
    scanf("%f",&direita);
    if (direita>50)
    { printf("Direta");
    }
    else
    { printf("Digite a distância à esquerda: ");
      scanf("%f",&esquerda);
      if (esquerda>50)
      { printf("Esquerda");
      }
      else
      { printf("Trás (marcha à ré)");
      }
    }
  }
  return 0;
}