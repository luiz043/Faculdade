#include <stdio.h>
#include <stdlib.h>
    int aloca(int t){
        int *v,x;
        v = (int) malloc (sizeof(int)*t);
        for(x=0;x<t;x++){
            scanf("%d",&v[x]);
        }
        for(x=0;x<t;x++){
            printf("%d",v[x]);
        }
        return t;
    } 
    
    int main(){
        int t;
        printf("tamanho vetor ");
        scanf("%d",&t);
        aloca(t);
        




    }