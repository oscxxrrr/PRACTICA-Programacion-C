#include <stdio.h>

int num;
char cadena[30];

main()
{
	FILE *f;
	
	if ((f = fopen("FIXERS\\Ex69.txt", "r")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    }
	else
	{
		fscanf(f, "%d\n", &num); 
		printf("%d\n", num);     
		
		fgets(cadena, sizeof(cadena), f); 
		printf("%s", cadena); 
		
		fclose(f);
	}
	  
	
	if ((f = fopen("FIXERS\\Ex70.txt", "w")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    }
	else
	{
		fprintf(f,"%s\n%d", cadena, num);     
		
		fclose(f);
	}
}

