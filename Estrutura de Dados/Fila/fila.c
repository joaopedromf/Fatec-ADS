#include "fila.h"

void inicia_fila (t_fila *f){
    f->prim = f->ult = NULL;
}

int esta_vazia (t_fila *f){
    return (f->prim == NULL);
}

void enfileirar (int i, t_fila *f){
    struct no * novo = cria_no(i);
    if (esta_vazia(f)){
        f->prim = novo;
        f->ult = novo;
    }
    else{
        f->ult->proximo = novo;
        f->ult = novo;
    }
}

int desenfileirar (t_fila *f){
    int i = f->prim->info;
    struct no * aux = f->prim;
    f->prim = f->prim->proximo;
    if(esta_vazia(f))
        f->ult = NULL;
    free(aux);
    return i;
}
void exibe_fila(t_fila *f){
    struct no * aux;
    if(esta_vazia(f))
        printf("Fila vazia");
    else{
        aux = f->prim;
        do{
            printf("%d ",aux->info);
            aux = aux->proximo;
        } while(aux != NULL); 
    }
    printf("\n");
}