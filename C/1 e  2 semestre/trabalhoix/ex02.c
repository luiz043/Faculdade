#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int *v2,*v1;
    int i=0,j=0,np=0;
    v1 = (int*) malloc(10 * sizeof(int));
    srand(time(NULL));
    for(i=0;i<10;i++){
        v1[i]=rand() % 10;
        if(v1[i]%2==0){
            np++;
        }
    }
    if(np==0){
        printf("nao tem valores ");
    }
    v2 = (int*) malloc (np * sizeof(int));
    for(i=0;i<10;i++){
        if(v1[i]%2==0)
            v2[j]=v1[i];
            j++;
    }
    for(j=0;j<np;j++){
        printf("%d ",v2[j]);
    }
    return 0;
}