#include <stdio.h>

main()
{
	char cadena[30];
	
	printf("Introduce una palabra: ");
	fgets(cadena, sizeof(cadena), stdin);
	strtok(cadena, "\n");
	
	printf("Cantidad total de vocales: %d", contvocals(cadena));
}

contvocals(char cadena[30])
{
	int i, cont;
	
	for (i = 0; i < strlen(cadena); i++)
	{
		if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' || 
		    cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' || cadena[i] == 'O' || cadena[i] == 'U' )
		{
			cont++;
		}
	}
	
	return cont;
}
