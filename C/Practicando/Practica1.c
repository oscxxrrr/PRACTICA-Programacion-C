#include <stdio.h>

int num, cont1, contX, cont2, i;

main()
{
	srand(time(NULL));
	
	for(i = 0; i < 14; i++)
	{
		num = rand() % 3;
		
		if (num == 1)
		{
			printf("Partido %2d:|	1	|		|		|\n", i + 1);
			printf("---------------------------------------------------------\n");
			cont1++;
		}
		
		if (num == 0)
		{
			printf("Partido %2d:|		|	x	|		|\n", i + 1);
			printf("---------------------------------------------------------\n");
			contX++;
		}
		
		if (num == 2)
		{
			printf("Partido %2d:|		|		|	2	|\n", i + 1);
			printf("---------------------------------------------------------\n");
			cont2++;
		}
	}
	
	printf("Resultado final: \n 1) Cantidad de 1: %d \n 2) Cantidad de X: %d \n 3) Cantidad de 2: %d", cont1, contX, cont2);
}
