#include <stdio.h>
#include <stdlib.h>
#include "exercicio_no.h"
struct no *cria_no(int i){
    struct no *temp = (struct no *) malloc(sizeof(struct no));
    if(temp != NULL){
        temp->info = i;
        temp->anterior = NULL;
        temp->proximo = NULL;
    }
    return temp;
}
void exibe_no(struct no *no){
    if(no->anterior == NULL)
        printf(" |A| ");
    printf(" <- | %d | -> ",no->info);
    if(no->proximo == NULL)
        printf(" |P| ");
}