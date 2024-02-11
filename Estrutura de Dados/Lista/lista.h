#include "no.h"

typedef struct{
    struct no * primeiro;
} lista;

void inicia_lista(lista *);

int esta_vazia(lista *);

int insere_inicio(int, lista *);
int insere_fim(int, lista *);

void exibe_lista(lista *);

int remove_inicio(lista *);
int remove_fim(lista *);