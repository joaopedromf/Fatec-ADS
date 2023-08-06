//2. Dado um número natural na base binária, transformá-lo para a base decimal.
//Exemplo: Dado 10010 a saída será 18, pois 1. 2^4 + 0. 2^3 + 0. 2^2 + 1. 2^1 + 0. 2^0 = 18.
#include <stdio.h>
#include <math.h>
int main()
{ int ndigitos,digito,i,decimal,soma=0;
  printf("Quantos digitos o número binário irá ter? ");
  scanf("%d",&ndigitos);
  int vet[ndigitos-1];
  for(i=1;i<=ndigitos;i++)
  { do
    { printf("Digite o %dº digito: ",i);
      scanf("%d",&digito);
    }
    while(digito>1||digito<0);
    vet[i]=digito;
    decimal=vet[i]*pow(2,ndigitos-i);
    soma=soma+decimal;
  }
  printf("O número em decimal é %d.",soma);
  return 0;
}