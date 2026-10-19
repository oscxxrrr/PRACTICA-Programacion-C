#include <stdio.h>

int num, i, max = 0, min = 100;
char cadena[50];

main()
{
	FILE *f;
		
	if ((f = fopen("FIXERS\\Ex75.txt", "w")) == NULL) 
	{
	    printf("ERROR: no puedo abrir el fichero\n");
	}
	   
	else
	{
		srand(time(NULL));
		for(i = 0; i<10; i++)
		{
			num = rand() % 100; 
			fprintf(f,"%d\n", num);
		}
		fclose(f);
	}
	
	if ((f = fopen("FIXERS\\Ex75.txt", "r")) == NULL) 
	{
	    printf("ERROR: no puedo abrir el fichero\n");
	}
	   
	else
	{
		while ( !feof( f ))
		{ 
			fscanf(f, "%d\n", &num);
			if(num < min)
			{
				min = num;
			}
			if(num > max)
			{
				max = num;
			}
			printf("%d\n", num);
		}
		printf("\nEl numero mas grande es: %d\n", max);
		printf("El numero mas pequeño es: %d\n", min);
		fclose(f);
	}	
}
