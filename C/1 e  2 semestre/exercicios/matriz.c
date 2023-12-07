#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mat[5][5],l=0,c;
    while(l<5)
    {
        c=0;
        while(c<5)
        {
            scanf("%d",&mat[l][c]);
            c++;
        }
        l++;
    }
    l=0;
    c=0;
    while(l<5)
    {
        c=0;
        while(c<5)
        {
            printf("%d ",mat[l][c]);
            c++;
        }
        printf("\n");
        l++;
    }
    
    return 0;
}
