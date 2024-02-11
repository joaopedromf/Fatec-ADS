#include <stdio.h>
#include <stdlib.h>
int main (){
    int *v,i;
    for(i=1;i<10000000;i++){
        v = (int *) malloc (500000 * sizeof(int));
        printf("%p\n",v);
        //libera a memória apontada por v
        free(v);
    }
    return 0;
}