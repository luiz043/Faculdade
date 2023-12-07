#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int primo(int x){
    int i, divisores = 0;
    for(i=1; i<=x; i++)
	{
        if(x%i==0)
            divisores++;
    }
    if(divisores==2)
    	return 1;
    else
    	return 0;
}
int main(void)
{
	setlocale (LC_ALL, "portuguese");
    int i, x;
    printf("Digite um número: ");
    scanf("%d", &x);
    for(i=1;i<=x;i++)
	{
        if(primo(i) == 1)
       		printf("%d ", i);
    }
}
