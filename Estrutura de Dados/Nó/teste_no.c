#include <stdio.h>
#include "no.h"
int main(){
    struct no *no1, *no2;
    no1 = cria_no(10);
    exibe_no(no1);
    no2 = cria_no(20);
    exibe_no(no2);

    no1->proximo = no2; //no1->proximo pode receber um endereço de struct no, no2 é um endereço de estruct no, então nesse momento, no1->proximo recebe o endereço de no2
    exibe_no(no1->proximo); 

    no2->proximo = no1;
    exibe_no(no1->proximo->proximo);

    return 0;
}