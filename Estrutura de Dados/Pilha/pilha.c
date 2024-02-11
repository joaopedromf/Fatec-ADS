#include "pilha.h"

void inicia_pilha(t_pilha * p, int c){
    p->dados = (int *) malloc(c * sizeof(int));
    p->topo = 0;
    p->capacidade = c;
}

int esta_vazia (t_pilha * p){
    return p->topo == 0;
}

int esta_cheia (t_pilha *p){
    return p->topo == p->capacidade;
}

void push (int i, t_pilha *p){
    p->dados[p->topo++] = i;
}

void mostra_pilha (t_pilha *p){
    int i;
    if(esta_vazia(p))
        printf("Pilha vazia");
    else
        for(i=p->topo-1; i>=0 ; i--){
            printf("%d ", p->dados[i]);
        }
    printf("\n");
}

int pop(t_pilha *p){
    return p->dados[--p->topo];
}