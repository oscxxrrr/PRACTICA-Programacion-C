#include <stdio.h>

main()
{
	char palabra[30];
	
	printf("Introduce una palabra: ");
	fgets(palabra, sizeof(palabra), stdin);
	strtok(palabra, "\n");
	
	tercera_letra(palabra);
}

tercera_letra(char palabra[30])
{
	int i;
	
	for(i = 0; i < strlen(palabra); i++)
	{
		if(i == 2)
		{
			printf("La tercera letra de la palabra %s es: %c", palabra, palabra[i]);
		}
	}
}
