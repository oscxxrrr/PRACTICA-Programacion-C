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
        fclose(f);
    }
    
    if ((f = fopen("FIXERS\\FixerB.txt", "w")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    } 
	else 
	{
        fprintf(f, "%d", mult);
        fclose(f);
    }
}
