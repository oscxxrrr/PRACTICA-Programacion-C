#include <stdio.h>

char cadena[30];

main()
{
	FILE *f;
	
	if((f = fopen("ficheros\\practica21.txt", "w")) == NULL)
	{
		printf("ERROR");
	}
	
	else
	{
		do
		{
			printf("Introduce una palabra (fi para acabar): ");
			fgets(cadena, sizeof(cadena), stdin);
			strtok(cadena, "\n");
			
			if(strcmp(cadena, "fi") != 0)
			{
				fprintf(f, "%s\n", cadena);
			}
			
		}while(strcmp(cadena, "fi") != 0);
		printf("Saliendo...");
	}
	fclose(f);
}
