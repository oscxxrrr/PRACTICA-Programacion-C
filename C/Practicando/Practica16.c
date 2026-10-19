#include <stdio.h>

main()
{
	int num, i;
	
	srand(time(NULL));
	
	printf("La quiniela: \n");
	
	for(i = 0; i < 14; i++)
	{
		num = rand() % 2 + 0;
		
		if(num == 1)
		{
			printf("Partido %d:		|	1	|		|		|\n", i + 1)
		}
	}
}
