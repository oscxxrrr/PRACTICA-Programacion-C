#include <stdio.h>

int num, mult;

main() 
{
    FILE *f;

    if ((f = fopen("FIXERS\\FixerB.txt", "r")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    } 
	else 
	{
        fscanf(f,"%d", &num);        
        mult = num * 2;
    }
    
    if ((f = fopen("FIXERS\\FixerD.txt", "w")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    } 
	else 
	{
        fprintf(f, "El numero %d multiplicado por 2 es: %d\n", num, mult);
        fclose(f);
    }
}
