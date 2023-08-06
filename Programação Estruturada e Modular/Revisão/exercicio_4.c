//4. Dados n e uma sequência de n números inteiros, determinar quantos segmentos de números iguais consecutivos compõem essa sequência.

//Exemplo: A seguinte sequência é formada por 5 segmentos de números iguais: 5, 2, 2, 3, 4, 4, 4, 4, 1, 1

//Ou seja, contarei assim: <<5>>,<< 2, 2>>,<< 3>>,<< 4, 4, 4, 4>>, <<1, 1>> 

//Portanto, tenho 5 grupos.
#include <stdio.h>
int main()
{ int i,qtd,grupos=1;
  printf("Quantos números vão ser digitados? ");
  scanf("%d",&qtd);
  int vet[qtd-1];
  for(i=0;i<qtd;i++)
  { printf("\nDigite o %dº número: ",i+1);
    scanf("%d",&vet[i]);
  }
  printf("\n<<%d",vet[0]);
  for(i=1;i<qtd;i++)
  { if(vet[i]!=vet[i-1])
    { printf(">>,<<%d",vet[i]);
      grupos++;
    }
    else
    { printf(",%d",vet[i]);
    }
  }
  printf(">>\n");
  printf("\nGrupos: %d",grupos);
  return 0;
}