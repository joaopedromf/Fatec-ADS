//5. Dados n e uma sequência de n números inteiros, determinar o comprimento de um segmento crescente de comprimento máximo.

//Exemplos:

//Na sequência 5, 10, 3, <<2, 4, 7, 9>>, 8, 5 o comprimento do segmento crescente máximo é 4.

//Na sequência 10, 8, 7, 5, 2 o comprimento de um segmento crescente máximo é 1.

//Outra sequência: 6, 4, 9, 10, 12, 13, 5, 2, 4, 8, 16, 32 -> 5
#include <stdio.h>
int main()
{ int qtd,i,comprimento=1,maximo=1;
  printf("Digite a quantidade de números: ");
  scanf("%d",&qtd);
  int vet[qtd-1];
  for(i=0;i<qtd;i++)
  { printf("Digite o %dº número: ",i+1);
    scanf("%d",&vet[i]);
  }
  for(i=1;i<qtd;i++)
  { if(vet[i]>vet[i-1])
    { comprimento++;
    }
    else
    { comprimento=1;
    }
    if(comprimento>maximo)
    { maximo=comprimento;
    }
  }
  printf("Comprimento máximo: %d",maximo);
  return 0;
}