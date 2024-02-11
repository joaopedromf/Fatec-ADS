#include <stdio.h>
int main (){
    int i,j,aux,n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++){
        printf("Digite o v[%d]: ",i);
        scanf("%d",v);
    }
    for(i=1;i<n;i++){
        for(j=0;j<n-i;j++){
            if(v[j]>v[j+1]){
                aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%d",v[i]);
    }
    return 0;
}