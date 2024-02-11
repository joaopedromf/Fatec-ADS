#include "no.h" //Biblioteca Local (própria do usuário) por isso entre aspas

struct no * cria_no (int i){
    struct no * temp = (struct no *) malloc (sizeof(struct no));  //Aloca um espaço na memória para essa struct
    if (temp != NULL) {
        temp->info = i;
        temp->proximo = NULL;
    }
    return temp;  //Devolve o endereço alocado para essa struct
}

void exibe_no (struct no * no){
    printf("| %d | -> ", no->info);
    if(no->proximo == NULL) printf("// ");
}