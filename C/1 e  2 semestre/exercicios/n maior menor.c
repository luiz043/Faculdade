#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num, maior, menor;
	int cont;
	cont = 2;
	scanf("%f",&num); //leia(num)
	maior=num;
	menor=num;
	while (cont<=10)
	{
		scanf("%f",&num);
		if(num>maior)
		{
			maior=num;	
		}
		else if(num<menor)
			{
				menor=num;
			}
		
		cont=cont+1; //ou cont++	
	}
	printf("Maior valor: %.2f \nMenor valor: %.2f",maior,menor); //escreva(maior)
	//dif=(maior-menor);
	printf("\nDiferenca: %.2f",maior-menor);
	
	return 0;
}