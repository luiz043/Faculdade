#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2==0)
        printf("par\n");
    else
        printf("impar\n");
    if(n>0)
        printf("postivo\n");
    else
        printf("negativo\n");
    return 0;

}