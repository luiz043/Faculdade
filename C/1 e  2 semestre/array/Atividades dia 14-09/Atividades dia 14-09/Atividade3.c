#include <stdio.h>
#include <stdlib.h>

int main()
{
  int M[5][5];
  int total;
  int lin, col;

  total = 25;

  for (lin = 0; lin < 5; lin++)
  {
    for (col = 0; col < 5; col++)
    {
      scanf("%d", &M[lin][col]);
    }
  }

  for (lin = 0; lin < total; lin++)
  {
    for (int col = lin + 1; col < total; col++)
    {
      if (M[0][lin] == M[0][col])
      {
        printf("Elemento %d repetido nas posicoes %d e %d\n", M[0][lin], lin, col);
        break;
      }
    }
  }

  return 0;
}