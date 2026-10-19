#include <stdio.h>

int num, i, max = 0, min = 100;

main()
{
	FILE *f;
	
	if((f = fopen("ficheros\\practica22.txt", "w")) == NULL)
	{
		printf("ERROR");
	}
	
	else
	{
		srand(time(NULL));
		
		for(i = 0; i < 10; i++)
		{
			num = rand() % 100;
			fprintf(f, "%d\n", num);
		}
	}
	fclose(f);
	
	if((f = fopen("ficheros\\practica22.txt", "r")) == NULL)
	{
		printf("ERROR");
	}
	
	else
	{
		while(!feof(f))
		{
			fscanf(f, "%d\n", &num);
			if( num > max)
			{
				max = num;
			}
			
			if ( num < min)
			{
				min = num;
			}
		}
		printf("El nombre mes petit es: %d \n El nombre mes gros es: %d", min, max);
		fclose(f);
	}
}

