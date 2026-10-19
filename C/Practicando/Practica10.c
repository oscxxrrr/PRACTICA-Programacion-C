#include <stdio.h>

int numeros[10], i;

main()
{
	for(i = 0; i < 10; i++)
	{
		printf("Numero %d: ", i + 1);
		scanf("%d", &numeros[i]);
	}
	
	for( i = 9; i >= 0; i--)
	{
		printf("\n%d", numeros[i]);
	}
}
