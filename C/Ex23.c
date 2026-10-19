#include <stdio.h>

int numero1;
int numero2;
int division;


main()
{	
	printf("Introduce un numero: ");
	scanf("%d",&numero1);
	printf("Introduce otro numero: ");
	scanf("%d",&numero2);
	division = numero1 / numero2;
	printf("La division de los dos numeros introducidos es %d", division);
}

