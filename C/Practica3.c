#include <stdio.h>
#include <locale.h>
#include <string.h>

char cadena[15];
int i;

main()
{
	printf("Introduce una cadena: ");
	fgets(cadena,sizeof(cadena), stdin);
	strtok(cadena,"\n");

	for (i = 0; i < strlen(cadena); i++)
	{
		if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u')
		{
			cadena[i] = '.';
		}
	}	
	printf("La cadena cambiada por puntos cada caracter que sea mayuscula: %s", cadena);
	
	
}
