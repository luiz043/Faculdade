#include <stdio.h>
#include <stdlib.h>

int main(){
    int Idade=0;

    printf("Digite idade:");
    scanf("%d",&Idade);

    if(Idade>=5 && Idade<=7){
        printf("Infantil A\n");
    }
    else if(Idade>=8 && Idade<=10){
        printf("Infantil B\n");
    }
    else if(Idade>=11 && Idade<=13){
        printf("Infantil C\n");
    }
    else if(Idade>=14 && Idade<=17){
        printf("Infantil D\n");
        }
    else if(Idade>=18){
        printf("Adulto\n");
    }
    
    system("pause");
    return 0;
}