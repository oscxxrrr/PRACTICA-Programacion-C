#include <stdio.h>

char palabra[30];
int i;

main()
{
	printf("Introduce una palabras: ");
	fgets(palabra, sizeof(palabra), stdin);
	strtok(palabra, "\n");
	
	for (i = strlen(palabra); i >= 0; i--)
	{
		printf("%c", palabra[i]);
	}
}
