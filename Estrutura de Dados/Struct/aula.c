#include <stdio.h>
#include <stdlib.h>
int main(){
    int a=4, *b;
    b = &a;
    printf("o conteudo de a =%d\n",*b);
    printf("o endereço de a =%p",b);
    return 0;
}