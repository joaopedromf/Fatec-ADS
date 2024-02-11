#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gera(int *,int);
void exibe(char * msg, int *,int);
void bubble(int *,int);
int main(){
    int *v, n;
    //inicializando o gerador pseudo-randômico
    srand(time(0));
    printf("Digite o tamanho do vetor, 0 encerra: ");
    scanf("%d",&n);
    //repetir enquanto tamanho > 0:
    while (n>0){
        //alocar um vetor dinamicamente, do tamanho que o usuário escolher
        v = (int *) malloc(n * sizeof(int));
        //gerar randomicamente os valores para o vetor
        gera(v, n);
        //exibir
        exibe("Vetor gerado: ",v, n);
        //bubble
        bubble(v, n);
        //exibir
        exibe("Vetor ordenado: ",v, n);
        //liberar a memória
        free(v);
        //ler novo tamanho
        printf("Digite o tamanho do vetor, 0 encerra: ");
        scanf("%d",&n);
    }
    return 0;
}
void gera(int *v,int n){
    int i;
    for(i=0;i<n;i++){
        v[i] = rand()%(n*10);
    }
}
void exibe(char * msg, int *v,int n){
    int i;
    printf("\n%s\n",msg);
    for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
void bubble(int *v,int n){
    int i, j, aux;
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(v[j]>v[j+1]){ //troca
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
}