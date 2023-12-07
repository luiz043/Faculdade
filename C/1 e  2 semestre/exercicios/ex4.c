#include <stdio.h>
#include <stdlib.h>
int main()
{
    int s,m,h;
    scanf("%d", &s);
    m=((s%3600)/60);
    h=(s/3600);
    s=((s%3600)%60);
    printf("horas:%d\nminutos:%d\nsegundos:%d\n",h,m,s);
    return 0;
}