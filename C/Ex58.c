#include <stdio.h>

int i, numeros[10];

main()
{
	for (i = 0; i < 10; i++)
	{
		printf("Introduce un numero: ");
		scanf("%d", &numeros[i]);
	}
	
	for (i = 9; i >= 0; i--)
	{
		printf("%d\n", numeros[i]);
	}
}

