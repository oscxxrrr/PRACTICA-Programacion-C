#include <stdio.h>

char cadena[50];

main()
{
	FILE *f;
	
	printf("Introduce el nombre de un archivo que quieras abrir (els fixers estan en el directori FIXERS y txt al final): ");
	fgets(cadena, sizeof(cadena), stdin);
	strtok(cadena, "\n");
	
	if ((f = fopen(cadena, "r")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    }
	else
	{
		while ( !feof( f ))
		{ 
			fgets(cadena, sizeof(cadena), f);
			printf("%s", cadena);
		}
	}
	fclose(f);
}

