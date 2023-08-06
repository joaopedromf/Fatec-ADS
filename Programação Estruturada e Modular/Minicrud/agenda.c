 //Código Base para o Mini-Projeto Agenda de Amigos
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>
struct ficha{
	char nome[40];
	char telefone[20];
  char endereco[100];
  char email[50];
  char datanasc[15];
  bool validador;
};
void fgets2(char entrada[], int tamanho)
{ fgets(entrada,tamanho,stdin);
  entrada[strlen(entrada)-1]='\0';
}
int procurar(char procurado[], struct ficha vetor[], int num_fichas)
{ char resp[5];
  int i;
  for(i=0;i<num_fichas;i++)
  { if (strstr(vetor[i].nome,procurado) != NULL && vetor[i].validador==true)
    { printf("\nO nome procurado é %s? [S/N] ",vetor[i].nome);
      fgets2(resp,5);
      if (resp[0]=='S'||resp[0]=='s')
      { return i;
      }
    }
  }
  return -1; 
}
int main()
{
	struct ficha agenda[100];
	int fichas_existentes = 0, proxima = 0;
	char opcao[10]="0"; 
        setlocale(LC_ALL, "Portuguese");
	while(opcao[0] != '6')
	{
		printf("\nEntre com a opção desejada:\n");
		printf("\n1) Inserir ficha:");
		printf("\n2) Procurar por nome:");
		printf("\n3) Listar toda a base:");
    printf("\n4) Atualizar uma ficha:");
		printf("\n5) Excluir por nome:");
		printf("\n6) Sair\n\n");
		fgets2(opcao,10);
		if(opcao[0] == '1') //inserir
		{
			printf("\nEntre com um nome:");
			fgets2(agenda[proxima].nome,40);
			printf("\nEntre com um telefone:");
			fgets2(agenda[proxima].telefone,20);
      printf("\nEntre com um endereço:");
			fgets2(agenda[proxima].endereco,100);
      printf("\nEntre com um email:");
			fgets2(agenda[proxima].email,50);
      printf("\nEntre com uma data de nascimento:");
			fgets2(agenda[proxima].datanasc,15);
      agenda[proxima].validador=true;
			fichas_existentes++;
			proxima++;
		}
		if(opcao[0] == '2') //procurar
		{
			char procurado[40];
			printf("\nEntre com o nome procurado:");
			fgets2(procurado,40);
			int i;
      i=procurar(procurado,agenda,fichas_existentes);
      if(i!=-1)
      { printf("\n\nO telefone de %s é %s, o endereço é %s, o email é %s e a data de nascimento é %s\n",
			  agenda[i].nome, agenda[i].telefone,agenda[i].endereco,agenda[i].email, agenda[i].datanasc);
        
      }
      else
      { printf("\n\nNome não encontrado\n");
      }
    }
		if(opcao[0] == '3') //listar tudo
		{
			printf("\n\n");
			int i;
      bool vazio=true;
			for(i=0; i<fichas_existentes; i++)
			{ if (agenda[i].validador)
        { printf("\n\nO telefone de %s é %s, o endereço é %s, o email é %s e a data de nascimento é %s\n",
			    agenda[i].nome,agenda[i].telefone,agenda[i].endereco,agenda[i].email, agenda[i].datanasc);
          vazio=false;
        }
			}
			if(vazio == true)
				printf("A base de dados está vazia!\n");
		}
    if(opcao[0] == '4') //atualizar
    { char procurado[40];
			printf("\nEntre com o nome da ficha que será alterada: ");
			fgets2(procurado,40);
			int i;
      i=procurar(procurado,agenda,fichas_existentes);
      if(i!=-1)
      { char aux[50];
        printf("\n\nTecle ENTER caso queira manter a informação atual.\n");
        printf("\nNome atual: %s",agenda[i].nome);
        printf("\nNome atualizado: ");
        fgets2(aux,50);
        if (aux[0]!='\0') strcpy(agenda[i].nome,aux);
        printf("\nTelefone atual: %s",agenda[i].telefone);
        printf("\nTelefone atualizado: ");
        fgets2(aux,50);
        if (aux[0]!='\0') strcpy(agenda[i].telefone,aux);
        printf("\nEndereço atual: %s",agenda[i].endereco);
        printf("\nEndereço atualizado: ");
        fgets2(aux,50);
        if (aux[0]!='\0') strcpy(agenda[i].endereco,aux);
        printf("\nEmail atual: %s",agenda[i].email);
        printf("\nEmail atualizado: ");
        fgets2(aux,50);
        if (aux[0]!='\0') strcpy(agenda[i].email,aux);
        printf("\nData de nascimento atual: %s",agenda[i].datanasc);
        printf("\nData de nascimento atualizado: ");
        fgets2(aux,50);
        if (aux[0]!='\0') strcpy(agenda[i].datanasc,aux);
      }
      else
      { printf("\n\nNome não encontrado\n");
      }
    }
		if(opcao[0] == '5') //excluir	
		{
			char procurado[40];
			printf("\nEntre com o nome que será excluído:");
			fgets2(procurado,40);
			int i;
      i=procurar(procurado,agenda,fichas_existentes);
      if(i>=0)
      { printf("\n\nO telefone de %s, que é %s, o endereço %s, o email %s e a data de nascimento %s será removido\n", agenda[i].nome, agenda[i].telefone,agenda[i].endereco,agenda[i].email,agenda[i].datanasc);
        agenda[i].validador=false;
      }
      else
      { printf("\n\nNome não encontrado\n");
      }
		}
	}
	return 0;
}