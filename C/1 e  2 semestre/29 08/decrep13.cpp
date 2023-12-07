#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	float dis, tem;
	printf ("Informe a distancia percorrida em quilometros: ");
	scanf ("%f", &dis);
	printf ("Informe o tempo da viagem em segundos: ");
	scanf ("%f", &tem);
	printf ("o preço será: R$ %.2f.", (dis*1.00)+(tem*0.02));
}

