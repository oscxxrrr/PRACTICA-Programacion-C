#include <stdio.h>

int numeros[10], i;

main()
{
	FILE *f;
		
	if ((f = fopen("ficheros\\practica.txt", "w")) == NULL) 
	{
	    printf("ERROR: no puedo abrir el fichero\n");
	}
	   
	else
	{
		for( i = 0; i < 10; i++)
		{
			printf("Numero %d: ", i + 1);
			scanf("%d", &numeros[i]);
		}
		
		for( i = 0; i < 10; i++)
		{
			numeros[i] = numeros[i] * 5;
		}
		
		for( i = 0; i < 10; i++)
		{
			fprintf(f, "%d\n", numeros[i]);
		}
	}
}
