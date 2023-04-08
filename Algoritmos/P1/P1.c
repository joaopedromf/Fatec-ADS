#include <stdio.h>
int main ()
{ int N,i,valor_exames,atencaot=0;
  float erro=0,errop,atencao,atencaor=0;
  printf("Digite a quantidade de exames: ");
  scanf("%d",&N);
  for (i=1;i<=N;i++)
  { printf("Digite o exame %d: ",i);
    scanf("%d",&valor_exames);
    if (valor_exames<0)
    { erro=erro+1;
    }
    else if (valor_exames>30)
    { atencaot=atencaot+valor_exames;
      atencaor=atencaor+1;
    }
  }
  errop=(erro/N)*100;
  if (atencaor>0)
  { atencao=atencaot/atencaor;
  }
  printf("\nRelatório:\nPorcentagem de Erros: %.1f%%\nMédia de Atenção: %.2f",errop,atencao);
  return 0;
}