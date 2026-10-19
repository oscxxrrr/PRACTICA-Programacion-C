#include <stdio.h>

int numero;
int acaba;

main()
{	
	printf("Introduce una numero: ");
	scanf("%d",&numero);
	acaba = numero % 10;
	if (acaba == 0)
		printf("El numero %d, si acaba en 0",numero);
	else
		printf("El numero %d, no acaba en 0",numero);
}

