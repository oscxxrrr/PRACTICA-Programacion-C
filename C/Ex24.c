#include <stdio.h>

int numero;

main()
{	
	printf("Introduce un numero que este entre 100 - 200: ");
	scanf("%d",&numero);
	if (numero > 100 && numero < 200)
		printf("El numero %d, es correcto.", numero);
	
	else
		printf("El numero %d, no es correcto", numero);
}

