#include <time.h>
#include "pilha.h"
int main () {
    t_pilha p;
    int c;
    printf ("digite a capacidade da pilha: ");
    scanf("%d", &c);
    inicia_pilha (&p, c);
    srand(time(0));
    do {
        if (rand() % 10 == 0) {
            if (!esta_cheia(&p))
                push(rand() % 10, &p);
        }
        else
            if (!esta_vazia(&p))
                printf ("%d foi desempilhado\n", pop(&p));
        mostra_pilha(&p);
    } while (!esta_vazia(&p));
    return 0;
}