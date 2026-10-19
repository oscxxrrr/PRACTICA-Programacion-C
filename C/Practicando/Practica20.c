#include <stdio.h>

char cadena[50];

main()
{	
	FILE *f;
	
	printf("Introduce el nombre del fichero que quieras ver (escriba 'ficheros\\nombre_fichero.txt'): ");
	fgets(cadena, sizeof(cadena), stdin);
	strtok(cadena, "\n");
	
	if((f = fopen(cadena, "r")) == NULL)
	{
		printf("ERROR");
	}
	
	else
	{
		while(!feof(f))
		{
			fgets(cadena, sizeof(cadena), f);
			printf("%s", cadena);
		}
	}
	fclose(f);			
}
