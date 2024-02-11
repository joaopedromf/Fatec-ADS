#include "no.h"

typedef struct {
    struct no * prim;
    struct no * ult;
} t_fila;

void inicia_fila (t_fila*);
int esta_vazia (t_fila*);
void enfileirar (int, t_fila*);
int desenfileirar (t_fila*);
void exibe_fila(t_fila*);