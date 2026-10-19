#include <stdio.h>

char cadena[50];

main()
{
	FILE *f;
		
	if ((f = fopen("FIXERS\\Ex73.txt", "w")) == NULL) 
	{
	    printf("ERROR: no puedo abrir el fichero\n");
	}
	   
	else
	{
		do
		{
			printf("Introduce una palabra (escribe 'fi' si vols aturar): ");
			fgets(cadena, sizeof(cadena), stdin);
			strtok(cadena, "\n");
			if (strcmp(cadena,"fi") != 0)
			{
				fprintf(f, "%s\n", cadena);
			}
		}while(strcmp(cadena,"fi") != 0);
		printf("Has salido");
		fclose(f);
	}	
}
