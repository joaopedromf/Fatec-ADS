//Crie uma função em C para calcular e retornar a soma dos elementos que não estão na borda de uma matriz. Exemplo: dada a matriz abaixo, a função retornará: 6 + 7 + 10 + 11 = 34.
//  1  2  3  4
//  5  6  7  8
//  9 10 11 12 
// 13 14 15 16
#include <stdio.h>
int somaCentro (int L,int C,int mat[L][C])
{ int i,j,soma=0;
  for(i=1;i<L-1;i++)
  { for(j=1;j<C-1;j++)
    { soma=soma+mat[i][j];
    }
  }
  return soma;
}
int main()
{ int i,j,linha,coluna;
  printf("Digite o numero de linhas: ");
  scanf("%d",&linha);
  printf("Digite o numero de colunas: ");
  scanf("%d",&coluna);
  int matriz[linha][coluna];
  for(i=0;i<linha;i++)
  { for(j=0;j<coluna;j++)
    { printf("Digite o valor da posição %d,%d: ",i,j);
      scanf("%d",&matriz[i][j]);
    }
  }
    printf("A soma dos elementos que não estão na borda é igual a %d.",somaCentro(linha,coluna,matriz));
  return 0;
}