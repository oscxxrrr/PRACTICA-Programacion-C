#include <stdio.h>

int numero;
int i;

main() 
{
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    printf("La tabla de multiplicar del numero %d:\n", numero);
    for (i = 1; i <= 10; i = i + 1)
	{
    	printf("%2d * %2d = %2d\n", numero, i, numero * i);
	}
}

