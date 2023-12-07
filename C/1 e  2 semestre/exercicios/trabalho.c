#include <stdio.h>
#include <stdlib.h>  
// quantidade de digitos
int qdigitos(int n)
{
    int count = 0;
  
    // remove digito ate ser 0
    while (n != 0) {
  
  //aumenta contador
        count++;
        n /= 10;
    }
  
    // retorna quantidade de digitos
    return count;
}
int main()
{
    int n[10],c,i;
    scanf("%d",&n[i]);
    scanf("%d",&c);
    //printf("quantidade de digitos em %d = %d\n",c,qdigitos(c));
    if(qdigitos(n[i]) == 8)
    {

    }

    if(qdigitos(c) == 1)
    {
        printf("%d.0%d",n[i],c);
    }
    else
    {
        printf("%d.%d",n[i],c);
    }
    return 0;
}