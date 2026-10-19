#include <stdio.h>

char palabra[30];
int i;
main()
{
	printf("Introduce una palabra: ");
	fgets(palabra, sizeof(palabra), stdin);
	strtok(palabra, "\n");
	
	for (i = 0; i <= strlen(palabra); i++)
	{
		if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
		{
			palabra[i] = '_';
		}
	}
	printf("%s", palabra);
}

