#include <stdio.h>

char cadena[50];
int i,guardar;

main()
{
	printf("Introduce una cadena con dos palabras: ");
	fgets(cadena,sizeof(cadena),stdin);
	strtok(cadena,"\n");
	
	for( i = 0; i<=strlen(cadena); i++)
	{
		if (cadena[i] == ' ')
		{
			guardar = i;
		}
	}
	
	for (i = guardar; i <= strlen(cadena); i++)
	{
		printf("%c", cadena[i]);
	}
	
	for (i = 0; i<=guardar; i++)
	{
		printf("%c", cadena[i]);
	}
}
