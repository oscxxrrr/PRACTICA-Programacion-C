#include <stdio.h>

int numero,suma;
char opcio;

main()
{
	while(opcio =! 'n')
	{
		printf("Introduce un numero: ");
		scanf("%d", &numero);
		printf("Quieres introducir otro numero (s/n): ");
		scanf("%c",&opcio);
	}
}
