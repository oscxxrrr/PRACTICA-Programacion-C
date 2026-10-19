#include <stdio.h>

main()
{
	int num;
	char cadena[30];
	
	FILE *f;
	
	if((f = fopen("ficheros\\practica17.txt", "w")) == NULL)
	{
		printf("ERROR: no puedo abrir el fichero\n");
	}
	
	else
	{
		printf("Introduce un numro: ");
		scanf("%d", &num);
		
		fflush(stdin);
		
		printf("Introduce una palabra: ");
		fgets(cadena, sizeof(cadena), stdin);
		strtok(cadena, "\n");
		
		fprintf(f, "%d\n%s", num, cadena);
	}
}
