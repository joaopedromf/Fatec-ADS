#include <stdio.h>
struct paciente
{ char nome [50];
  int idade;
  float peso;
  float altura;
};
void obesosMenores(struct paciente vet [], int N)
{ int i;
  printf("\n\nPacientes obesos de menor:");
  for(i=0;i<N;i++)
  { if(vet[i].peso/(vet[i].altura*vet[i].altura)>30&&vet[i].idade<18)
  { printf("\n\nNome: %s\nIdade: %d\nPeso: %.2f\nAltura: %.2f",vet[i].nome,vet[i].idade,vet[i].peso,vet[i].altura);
  }
  }
}
int main() 
{ struct paciente vet[100];
  int i,totalPacientes=3;
  for(i=0;i<totalPacientes;i++)
  { printf("\nDigite o nome do paciente %d: ",i+1);
    fgets(vet[i].nome,50,stdin);
vet[i].nome[strlen(vet[i].nome)-1] = '\0';
   printf("Digite a idade do paciente %d (anos): ",i+1);
   scanf("%d",&vet[i].idade);
   getchar();
   printf("Digite o peso do paciente %d (kg): ",i+1);
   scanf("%f",&vet[i].peso);
   getchar();
   printf("Digite a altura do paciente %d (m): ",i+1);
   scanf("%f",&vet[i].altura);
   getchar();
  }
  obesosMenores(vet,totalPacientes);
  return 0;
}
