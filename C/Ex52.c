#include <stdio.h>

int num, i;
char barresbaixes[200];

main()
{
	printf("Introduce un numero: ");
	scanf("%d", &num);
	
	for(i = 0; i<=num; i++)
	{
		barresbaixes[i] = '_';
	}
	
	for (i = 1; i <= strlen(barresbaixes); i++)
	{
		printf("%c ", barresbaixes[i]);
	}
}
