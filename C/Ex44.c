#include <stdio.h>
#include <locale.h>

char cadena[30];
int i;

main()
{
	printf("Introduce una cadena cualquiera: ");
	fgets(cadena,sizeof(cadena),stdin);
	strtok(cadena,"\n");
	
	for (i = 0; i < strlen(cadena); i++)
	{
		if (isupper(cadena[i]))
		{
			printf("Tiene las mayusculas: %c\n", cadena[i]);
		}
	}
	
	
}
