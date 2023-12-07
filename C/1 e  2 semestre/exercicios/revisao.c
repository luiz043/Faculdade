#include <stdio.h>
#include <stdlib.h>
int main()
{
    int vet[20],vet2[5],i=0,x=0;
    while (i<20)
    {
        scanf("%d",&vet[i]);
        i++;
    }
    i=0;
    while (i<20)
    {
       if(vet[i]<vet[i+1])
       {
            vet2[x]=vet[i];  
       }
       i++;
    }
    i=0;
    while(i<5)
    {
        printf("%d ",vet2[x]);
        i++; 
    }

    return 0;
}