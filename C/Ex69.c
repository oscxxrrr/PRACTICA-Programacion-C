#include <stdio.h>

int num;
char cadena[30];

main()
{
	FILE *f;
	
	if ((f = fopen("FIXERS\\Ex69.txt", "w")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    }
	
	printf("Introduce un numero: ");
	scanf("%d", &num);  

	printf("Introduce una palabra: ");
	fgets(cadena, sizeof(cadena), stdin); 
	strtok(cadena, "\n"); 
	
	fprintf(f,"%d\n", num);  
	fprintf(f,"%s", cadena); 
	
	fclose(f);  
}

