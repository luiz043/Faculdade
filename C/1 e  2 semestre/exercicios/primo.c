#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int n,c,cd=0;
    scanf("%d",&n);
    c=1;
    do{
        printf("%d",c);
        if(n%c==0){
            cd=cd+1;            
        }
        c=c+1;
    }while(c<=n);
    if(cd>2){
            printf("\nnao e primo");
        }
        else{
            printf("\ne primo");
        }

}