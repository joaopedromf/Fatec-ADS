//Crie uma função para calcular e retornar a soma dos elementos ímpares de uma matriz que estão em linhas ímpares. A função deve realizar esta operação para uma matriz de tamanho qualquer (não vale resolver somenta para uma matriz pequena, ou seja, USE REPETIÇÕES!!!).
#include <stdio.h>
int soma(int L,int C,int mat[L][C])
{ int i,j,soma=0;
  for(i=1;i<L;i=i+2)
  { for(j=0;j<C;j++)
    { if(mat[i][j]%2!=0)
      { soma+=mat[i][j];
      }
    }
  }
  return soma;
}
int main()
{ int i,j,linha,coluna;
  printf("Digite a quantidade de linhas: ");
  scanf("%d",&linha);
  printf("Digite a quantidade de colunas: ");
  scanf("%d",&coluna);
  int matriz[linha][coluna];
  for(i=0;i<linha;i++)
  { for(j=0;j<coluna;j++)
    { printf("Digite o valor de matriz[%d][%d]: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
  printf("A soma dos valores ímpares nas linhas ímpares é igual a %d.",soma(linha,coluna,matriz));
  return 0;
}