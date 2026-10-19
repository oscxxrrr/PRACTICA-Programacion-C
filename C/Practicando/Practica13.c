#include <stdio.h>

main()
{
	char cadena[30];
	
	printf("Introduce una palabra: ");
	fgets(cadena, sizeof(cadena), stdin);
	strtok(cadena, "\n");
	
	terceraletra(cadena);
}

terceraletra(char cadena[30])
{
	printf("La tercera letra de la palabra es: %c", cadena[2]);
}
