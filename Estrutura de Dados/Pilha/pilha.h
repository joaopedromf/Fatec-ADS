#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int * dados;
    int topo;
    int capacidade;
} t_pilha;

void inicia_pilha(t_pilha *, int);

int esta_vazia (t_pilha *);

void push (int, t_pilha *);

void mostra_pilha (t_pilha *);

int pop(t_pilha *);

int esta_cheia (t_pilha *);