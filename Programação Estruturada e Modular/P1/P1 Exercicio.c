//Dado um vetor de números inteiros, deseja-se vasculhá-lo em busca do elemento mais próximo possível de um dado número procurado. Crie uma função em C que receba como parâmetros o vetor, o tamanho do vetor e o número procurado, e retorne o índice do elemento que mais se aproxima do procurado. Sua assinatura seria: int procuraAproximada (int vet[],int N, int procurado).
#include <stdio.h>
#include <stdlib.h>
int procuraAproximada(int vet[],int N,int procurado)
{ int i,vetAux[N],menor,menori=0;
  menor=abs(vet[0]-procurado);
  for(i=1;i<N;i++)
  { vetAux[i]=abs(vet[i]-procurado);
    if(vetAux[i]<menor)
    { menor=vetAux[i];
      menori=i;
    }
  }
  return menori;
}
int main()
{ int tam,i,vprocurado;
  printf("Digite o tamanho do vetor: ");
  scanf("%d",&tam);
  int vetor[tam];
  for(i=0;i<tam;i++)
  { printf("Digite o valor de vet[%d]: ",i);
    scanf("%d",&vetor[i]);
  }
  printf("Digite o valor procurado: ");
  scanf("%d",&vprocurado);
  printf("O índice mais próximo do valor procurado é %d.",procuraAproximada(vetor,tam,vprocurado));
  return 0;
}