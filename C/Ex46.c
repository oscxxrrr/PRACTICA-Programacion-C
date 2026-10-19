#include <stdio.h>
#include <locale.h>
#include <string.h>

char cadena[15];
int i;
int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

main()
{
	printf("Introduce una cadena: ");
	fgets(cadena,sizeof(cadena), stdin);
	strtok(cadena,"\n");
	
	for (i = 0; i < strlen(cadena); i++)
	{
		if (cadena[i] == 'a')
		{
			contA++;
		}
		
		if (cadena[i] == 'e')
		{
			contE++;
		}
		
		if (cadena[i] == 'i')
		{
			contI++;
		}
		
		if (cadena[i] == 'o')
		{
			contO++;
		}
		
		if (cadena[i] == 'u')
		{
			contU++;
		}
	}
	printf("La cadena %s:\n Contiene = %d A\n Contiene = %d E\n Contiene = %d I\n Contiene = %d O\n Contiene = %d U\n",cadena,contA,contE,contI,contO,contU);
}
