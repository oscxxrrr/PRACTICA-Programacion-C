#include <stdio.h>

main()
{
	char cadena[30];
	int num;
	
	printf("Introduce una palabra: ");
	fgets(cadena, sizeof(cadena), stdin);
	strtok(cadena, "\n");
	fflush(stdin);
	
	printf("Introduce un numero: ");
	scanf("%d", &num);
	
	lletrax(cadena, num);
}

lletrax(char cadena[30], int num)
{
	printf("La letra que se encuentra en la posicion %d de la palabra %s es: %c", num, cadena, cadena[num - 1]);
}
