#include "lista.h"

void inicia_lista(lista *l){
    l->primeiro = NULL;
}

int esta_vazia(lista *l){
    return (l->primeiro == NULL);
}

int insere_inicio(int i, lista *l){
    struct no * novo = cria_no(i);
    if(novo != NULL){ // if(novo) 
        if(!esta_vazia(l)){
            novo->proximo = l->primeiro;
        }
        l->primeiro = novo;
        return 1;
    }
    return 0;
}

void exibe_lista(lista *l){
    struct no * aux = l->primeiro;
    if(esta_vazia(l)){
        printf("Esta vazia\n");
    }
    else{
        aux = l->primeiro;
        while(aux != NULL){ //while(aux)           busca o final da lista
            exibe_no(aux);
            aux = aux->proximo;
        }
    }
    printf("\n");
}

int insere_fim(int i, lista *l){
    struct no * novo = cria_no(i);
    struct no * aux;
    if(novo){
        if(esta_vazia(l)){
            l->primeiro = novo;
        }
        else{
            aux = l->primeiro;
            while (aux->proximo != NULL){ //busca o último
                aux=aux->proximo;
            }
            aux->proximo = novo;   
        }
        return 1;
    }
    return 0;
}

int remove_inicio(lista *l){
    int i = l->primeiro->info;
    struct no * aux = l->primeiro;
    l->primeiro = l->primeiro->proximo;
    free(aux);
    return i;
}

int remove_fim(lista *l){
    int i;
    struct no * aux = l->primeiro;
    if(l->primeiro->proximo != NULL){
        while(aux->proximo->proximo != NULL){
            aux = aux->proximo;
        }
        i= aux->proximo->info;
        free(aux->proximo);
        aux->proximo = NULL;
    }
    else{
        i = l->primeiro->info;
        free(l->primeiro);
        l->primeiro = NULL;
    }
    return i;  
}