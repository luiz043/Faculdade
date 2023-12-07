#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main (void)
{
	setlocale (LC_ALL, "portuguese");
	int x, y=1;
	for (x=1; y<=10; y++)
	{
		printf ("%d x %d = %d\n", x, y, x*y);
		if (y==10)
		{
			y=0;
			x++;
		}
		if (x==10)
		{
			break;
		}
	}
}

