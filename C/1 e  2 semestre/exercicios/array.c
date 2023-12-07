#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mat[6][6],vet[35];
    int i,c=0,l=0,s=0,num;
    while(l<6)
    {
        c=0;
        while(c<6)
        {
            scanf("%d",&mat[l][c]);
            s=s+mat[l][c];
            c++;
        }
        l++;
    }
    printf("\n");
    printf("informe um numero:");
    scanf("%d",&num);
    l=0;
    c=0;
    i=0;
    while(l<6)
    {
        c=0;
        while(c<6)
        {
            vet[i]=mat[l][c]*num;
            printf("%d ",vet[i]);
            i++;
            c++;
        }
        l++;
    }




    return 0;

}




