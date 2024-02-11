#include <time.h>
#include "fila.h"
int main (){
    t_fila f;
    inicia_fila(&f);
    srand(time(0));
    do{
        if(rand()%2){
            enfileirar(rand()%10, &f);
        }
        else{
            printf("%d foi atendido\n", desenfileirar(&f));
        }
        exibe_fila(&f);
    } while(!esta_vazia(&f));;
    return 0;
}