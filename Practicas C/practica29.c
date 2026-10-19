#include <stdio.h>

int numeros,i;


main()
{
	printf("Introduce un numero: ");
	scanf("%d", &numeros);
	if (numeros > 1)
	{
		for (i = numeros; i>=1; i--)
		{
		printf("%d\n",i);
		}
	}
	
	if (numeros < 1)
	{
		for (i = numeros; i<=0; i++)
		{
		printf("%d\n",i);
		}
	}
	
	if (numeros == 1)
	{
		printf("El numero es 1");
	}
	
}
