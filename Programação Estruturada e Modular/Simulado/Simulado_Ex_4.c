//Crie uma função RECURSIVA para calcular a soma dos quadrados dos números positivos até N. Para valores negativos de N, a função deve retornar o valor dela para o módulo do número, ou seja, o correspondente positivo. O protótipo da função é assim: int somaQuadrados (int N)
//Exemplos:
//se N for 10, a função somaQuadrados deverá retornar o valor de 1² + 2² + 3² + …. + 8² + 9² + 10² = 385
//se N for 5, a função somaQuadrados deverá retornar o valor de 1² + 2² + 3² + 4² + 5² = 55
//se N for 0, a função somaQuadrados deverá retornar o valor 0
//se N for -5, a função somaQuadrados deverá retornar o mesmo que somaQuadrados(5) = 55
#include <stdio.h>
int somaQuadrados(int N)
{ if(N<0)
  { N=-N;
  }
  if(N==0)
  { return 0;
  }
  else
  { return N*N+somaQuadrados(N-1);
  }
}
int main()
{ int numero;
  printf("Digite um número: ");
  scanf("%d",&numero);
  printf("A soma dos quadrados é igual a %d.",somaQuadrados(numero));
  return 0;
}