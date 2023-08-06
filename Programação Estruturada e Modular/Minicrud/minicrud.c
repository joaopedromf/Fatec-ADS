//Código Base para o Mini-Projeto Agenda de Amigos
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>
#include <stdlib.h>
struct ficha{
char nome[40];
char telefone[20];
char email[40];
char endereco[50];
char datanasc[15];
int validade;

};
int procurar(char procurado[], struct ficha vetor[], int num_fichas)
{
int i, resposta;
for (i=0; i<num_fichas; i++)
{
if(strstr(vetor[i].nome, procurado) != NULL)
{
printf("O nome procurado é %s? \n Digite 1 para sim e 0 para não.\n", vetor[i].nome);
scanf("%d", &resposta);
if (resposta == 1)
{
return i;
}
}
}
return -1;
}

int main()
{
struct ficha agenda[100];
int fichas_existentes = 0, proxima = 0, i;
char opcao[10]="0";
setlocale(LC_ALL, "Portuguese");
while(opcao[0] != '5')
{
printf("\nEntre com a opção desejada:\n");
printf("\n1) Inserir ficha:");
printf("\n2) Procurar por nome:");
printf("\n3) Listar toda a base:");
printf("\n4) Excluir por nome:");
printf("\n5) Sair\n\n");
fgets(opcao,10,stdin);
if(opcao[0] == '1') //inserir
{
printf("\nEntre com um nome:");
fgets(agenda[proxima].nome,40,stdin);
agenda[proxima].nome[strlen(agenda[proxima].nome)-1] = '\0';
printf("\nEntre com um telefone:");
fgets(agenda[proxima].telefone,20,stdin);
agenda[proxima].telefone[strlen(agenda[proxima].telefone)-1] = '\0';
printf("\nEntre com um email:");
fgets(agenda[proxima].email,40,stdin);
agenda[proxima].email[strlen(agenda[proxima].email)-1] = '\0';
printf("\nEntre com um endereço:");
fgets(agenda[proxima].endereco,50,stdin);
agenda[proxima].endereco[strlen(agenda[proxima].endereco)-1] = '\0';
printf("\nEntre com um data de nascimento:");
fgets(agenda[proxima].datanasc,15,stdin);
agenda[proxima].datanasc[strlen(agenda[proxima].datanasc)-1] = '\0';
agenda[proxima].validade = 1;
fichas_existentes++;
proxima++;
}
if(opcao[0] == '2') //procurar
{
char procurado[40];
printf("\nEntre com o fragmento ou o nome procurado:");
fgets(procurado,40,stdin);
procurado[strlen(procurado)-1] = '\0';
i = procurar(procurado, agenda, fichas_existentes);
if( i == -1)
{
printf("\n\nNome não encontrado\n");
}
else if(agenda[i].validade == 0)
{
printf("\n\nNome recém excluido\n");
}
else {
printf("\n\nO telefone de %s é %s, o email é %s, o endereço é %s, a data de nascimento %s\n",
agenda[i].nome, agenda[i].telefone, agenda[i].email, agenda[i].endereco, agenda[i].datanasc);
}
}
if(opcao[0] == '3') //listar tudo
{
printf("\n\n");
int i;
for(i=0; i<fichas_existentes; i++)
{
if (agenda[i].validade == 0)
{
printf("\n\nO nome %s foi excluido recentemente.\n", agenda[i].nome);
}
else
{
printf("O telefone de %s é %s \n",
agenda[i].nome, agenda[i].telefone);
printf("O email de %s é %s \n",
agenda[i].nome, agenda[i].email);
printf("O endereço de %s é %s \n",
agenda[i].nome, agenda[i].endereco);
printf("A data de nascimento de %s é %s \n\n",
agenda[i].nome, agenda[i].datanasc);
}
}
if(fichas_existentes == 0)
printf("A base de dados está vazia! \n");
}
if(opcao[0] == '4') //excluir
{
char procurado[40];
printf("\nEntre com o nome que sera excluído:");
fgets(procurado,40,stdin);
procurado[strlen(procurado)-1] = '\0';
i = procurar(procurado, agenda, fichas_existentes);
if( i == -1)
{
printf("\n\nNome não encontrado\n");
}
else
{
printf("O telefone de %s, que é %s, será removido\n", agenda[i].nome, agenda[i].telefone);
printf("O email de %s, que é %s, será removido\n", agenda[i].nome, agenda[i].email);
printf("O endereço de %s, que é %s, será removido\n", agenda[i].nome, agenda[i].endereco);
printf("A data de nascimento de %s, que é %s, será removido\n", agenda[i].nome, agenda[i].datanasc);

agenda[i].validade = 0;
}
}
}
return 0;
}