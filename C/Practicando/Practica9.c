#include <stdio.h>

main()
{
	char palabra[30];
	
	printf("Introduce una palabra: ");
	fgets(palabra, sizeof(palabra), stdin);
	strtok(palabra, "\n");
	
	alreves(palabra);
}

alreves(char palabra[30])
{
	int i;
	
	for (i = (strlen(palabra) - 1); i >= 0; i--)
	{
		printf("%c", palabra[i]);
	}
}
