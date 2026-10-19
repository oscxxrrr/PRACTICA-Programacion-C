#include <stdio.h>

int num;

main() 
{
    FILE *f;

    if ((f = fopen("FIXERS\\FixerB.txt", "w")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    } 
	else 
	{
        printf("Introduce un numero: ");
        scanf("%d", &num);

        fprintf(f, "%d", num);
        fclose(f);
    }
}

