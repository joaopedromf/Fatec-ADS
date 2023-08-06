#include <stdio.h>
struct partida
{ char nomet1[50];
  int golst1;
  char nomet2[50];
  int golst2;
};
void Empates(struct partida vet[], int totalPartidas)
{ int i;
  printf("Jogos Empatados:");
  for(i=0;i<totalPartidas;i++)
  { if(vet[i].golst1 == vet[i].golst2)
    { printf("\n%s vs %s - Placar: %d x %d",vet[i].nomet1,vet[i].nomet2,vet[i].golst1,vet[i].golst2);
    }
  }
}
int Goleada(struct partida vet[], int totalPartidas)
{ if(totalPartidas==0)
  {  return 0;
  }
  else
  { if(vet[totalPartidas-1].golst1>=vet[totalPartidas-1].golst2+3||vet[totalPartidas-1].golst2>=vet[totalPartidas-1].golst1+3)
    { return 1+Goleada(vet, totalPartidas-1);
    }
    else
    { return Goleada(vet, totalPartidas-1);
    }
  }
}
int main()
{ struct partida vet[100];
  int totalPartidas=3;
  int i;
  for(i=0;i<totalPartidas;i++)
  { printf("Digite o nome do time 1: ");
    fgets(vet[i].nomet1,50,stdin);
    vet[i].nomet1[strlen(vet[i].nomet1)-1]='\0';
    printf("Digite a quantidade de gols do time 1: ");
    scanf("%d",&vet[i].golst1);
    getchar();
    printf("Digite o nome do time 2: ");
    fgets(vet[i].nomet2,50,stdin);
    vet[i].nomet2[strlen(vet[i].nomet2)-1]='\0';
    printf("Digite a quantidade de gols do time 2: ");
    scanf("%d",&vet[i].golst2);
    getchar();
  }
  printf("\n");
  Empates(vet,totalPartidas);
  printf("\nJogos que tiveram goleada: %d", Goleada(vet,totalPartidas));
	return 0;
}