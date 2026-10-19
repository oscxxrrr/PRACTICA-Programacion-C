#include <stdio.h>

int numeros, i;


main()
{
	printf("Introdueix un numero: ");
	scanf("%d", &numeros);	
	printf("Tabla de multiplicar %d: \n",numeros);
	for (i = 1; i <= 10; i++)
	{
		printf("%3d  * %3d = %3d\n", numeros,i, numeros*i);
	}
}
