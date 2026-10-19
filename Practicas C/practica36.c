#include <stdio.h>
#include <locale.h>

int numeros,i,mayor,menor;


main()
{
	printf("Numero 1: ");
	scanf("%d", &numeros);
	menor = numeros;
	mayor = numeros;
	
	for (i = 2; i<=10; i++)
	{
		printf("Numero %d: ",i);
		scanf("%d", &numeros);
		if (numeros < menor)
		{
			menor = numeros;
		}
		
		if (numeros > mayor)
		{
			mayor = numeros;
		}
	}
	printf("El numero mayor es: %d\n", mayor);
	printf("El numero menor es: %d", menor);
}
