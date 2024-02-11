#include "lista.h"
int main(){
    lista l;
    int n;
    inicia_lista(&l);
    for(n=2;n<=8;n+=2){
        if(insere_inicio(n, &l)){
            printf("%d inserido no inicio da lista com sucesso\n",n);
            exibe_lista(&l);
        }
        else{
            printf("Falha na alocacao de memoria\n");
        }
    }
    for(n=1;n<8;n+=2){
        if(insere_fim(n, &l)){
            printf("%d inserido no final da lista com sucesso\n",n);
            exibe_lista(&l);
        }
        else{
            printf("Falha na alocacao de memoria\n");
        }
    }
    if(!esta_vazia(&l)){
        printf("%d foi removido do inicio\n", remove_inicio(&l));
        exibe_lista(&l);
    }
    if(!esta_vazia(&l)){
        printf("%d foi removido do final\n", remove_fim(&l));
        exibe_lista(&l);
    }
    return 0;
}