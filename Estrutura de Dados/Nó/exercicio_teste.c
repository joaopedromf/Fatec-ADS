// Implementar uma estrutura nó com ponteiros para o próximo e para o anterior
// --> .h
// --> .c
// --> teste.c
#include <stdio.h>
#include "exercicio_no.h"
int main(){
    struct no *no1, *no2, *no3;
    // Criando um nó
    no1 = cria_no(10);
    exibe_no(no1);
    no2 = cria_no(20);
    exibe_no(no2);
    no3 = cria_no(30);
    exibe_no(no3);
    printf("\n");
    // Atribuindo o próximo
    no1->proximo = no2;
    exibe_no(no1->proximo);
    no2->proximo = no3;
    exibe_no(no2->proximo);
    no3->proximo = no1;
    exibe_no(no3->proximo);
    printf("\n");
    // Atribuindo o anterior
    no1->anterior = no3;
    exibe_no(no1->anterior);
    no2->anterior = no1;
    exibe_no(no2->anterior);
    no3->anterior = no2;
    exibe_no(no3->anterior);
    return 0;
}