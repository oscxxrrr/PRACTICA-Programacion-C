#include <stdio.h>

char cadena[50];

main() 
{
    FILE *f;

    if ((f = fopen("FIXERS\\FixerB.txt", "r")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    } 
	else 
	{
        fgets(cadena, 50, f);
        printf("%s", cadena);
    }
}

