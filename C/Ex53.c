#include <stdio.h>

int i;
char paraula[200], espais[200];

main()
{
	printf("Introduce una palabra: ");
	fgets(paraula, sizeof(paraula), stdin);
	strtok(paraula, "\n");
	
	for(i = 0; i<strlen(paraula); i++)
	{
		espais[i] = '_';
	}
	
	for (i = 0; i < strlen(paraula); i++)
	{
		printf("%c ", espais[i]);
	}
}
