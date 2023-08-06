//Crie uma função em C que receba por parâmetro dois vetores de números reais e um número inteiro que represente o tamanho destes vetores; a função deve calcular a chamada distância quadrática de dois vetores. Este cálculo soma os quadrados das diferenças dos valores correspondentes dos dois vetores, ou seja, (A[0] - B[0])² + (A[1] - B[1])² + (A[2] - B[2])² + … + (A[10] - B[10])². Pronto! A assinatura da função é assim: double distanciaQuadratica (double A[ ], double B[ ], int N).
#include <stdio.h>
#include <math.h>
double distanciaQuadratica(double A[],double B[],int N)
{ int i;
  double distancia=0;
  for(i=0;i<N;i++)
  { distancia=distancia+pow(A[i]-B[i],2);
  }
  return distancia;
}
int main()
{ int tam,i;
  printf("Digite o tamanho dos vetores: ");
  scanf("%d",&tam);
  double vet1[tam], vet2[tam];
  for(i=0;i<tam;i++)
  { printf("Digite o valor da posição %d do vetor 1: ",i);
    scanf("%lf",&vet1[i]);
  }
  for(i=0;i<tam;i++)
  { printf("Digite o valor da posição %d do vetor 2: ",i);
    scanf("%lf",&vet2[i]);
  }
  printf("A distância quadrática dos vetores é igual a %.2lf.",distanciaQuadratica(vet1,vet2,tam));
  return 0;
}