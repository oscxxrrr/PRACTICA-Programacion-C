#include <stdio.h>

main()
{
	char cadena[30];
	int num;
	
	FILE *f;
	
	if((f = fopen("ficheros\\practica17.txt", "r")) == NULL)
	{
		printf("ERROR: no puedo abrir el fichero\n");
	}
	
	else
	{
		fscanf(f, "%d\n", &num);
		fgets(cadena, sizeof(cadena), f);
	}
	fclose(f);
	
	if((f = fopen("ficheros\\practica18.txt", "w")) == NULL)
	{
		printf("ERROR: no puedo abrir el fichero\n");
	}
	
	else
	{
		fprintf(f, "%s\n%d", cadena, num);
	}
	fclose(f);
}
