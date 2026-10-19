#include <stdio.h>

contV(char palabra[30]);

main()
{
	char palabra[30];
	
	printf("Introduce una palabra: ");
	fgets(palabra, sizeof(palabra), stdin);
	strtok(palabra, "\n");
	
	contV(palabra);
}

contV(char palabra[30])
{
	int i, contV;
	
	for(i = 0; i<strlen(palabra); i++)
	{
		if(palabra[i] == 'a' ||palabra[i] == 'e' ||palabra[i] == 'i' ||palabra[i] == 'o' ||palabra[i] == 'u')
		{
			contV++;
		}
	}
	printf("La palabra %s contiene %d vocales", palabra, contV);
}
