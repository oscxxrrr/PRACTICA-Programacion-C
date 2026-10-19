#include <stdio.h>

int ocult = 56;
int i;
int nombre;

main()
{
	while (nombre != ocult)
	{
		printf("Introduce un numero: ");
		scanf("%d", &nombre);
		if (nombre < ocult)
		{
			printf("El numero %d es menor\n", nombre);
		}
		
		if (nombre > ocult)
		{
			printf("El numero %d es mayor\n", nombre);
		}
	}
	printf("El numero %d es el correcto, enhorabuena", nombre);
	
}

