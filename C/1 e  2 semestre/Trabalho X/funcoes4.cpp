#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
int jogada ()
{
	int i, x; 
	for (i=0; i<=100; i++)
	{
		srand (time (NULL));
		x=(rand () %1)+1;
		return (x);
	}
}
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int x, cara=0, coroa=0;
	for (int i=0; i<100; i++)
	{
		x=jogada();
		if (x==0)
			cara++;
		else
			coroa++;
	}
	printf ("Caiu %d caras e %d coroas.", cara, coroa);
}
