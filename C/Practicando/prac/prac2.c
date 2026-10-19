#include <stdio.h>

int i, num, cont1,cont2,contX;

main()
{
	srand(time(NULL));
	
	printf("La quiniela: \n");
	
	for(i = 0; i < 14; i++)
	{
		num = rand() % 3 ;
		
		if( num == 1)
		{
			printf("Partido %d: |	1	|		|		|\n", i + 1);
			printf("---------------------------------------------------------\n");
			cont1++;
		}
		 
		if( num == 0)
		{
			printf("Partido %d: |		|	x	|		|\n", i + 1);
			printf("---------------------------------------------------------\n");
			contX++;
		}
		
		if( num == 2)
		{
			printf("Partido %d: |		|		|	2	|\n", i + 1);
			printf("---------------------------------------------------------\n");
			cont2++;
		}
	}
	printf("Cantidad total de 1: %d \nCantidad total de X: %d \nCantidad total de 2: %d \n", cont1,contX,cont2);
}
