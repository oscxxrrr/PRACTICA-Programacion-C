#include <stdio.h>

main()
{
	char palabra[30];
	int num;
	
	printf("Introduce una palabra: ");
	fgets(palabra, sizeof(palabra), stdin);
	strtok(palabra, "\n");
	
	fflush(stdin);
	
	printf("Introduce un numero: ");
	scanf("%d", &num);
	
	printf("La letra de la posicion %d de la palabra %s es: %c", num, palabra, lletrapos(palabra, num));
}

lletrapos(char palabra[30], int num)
{
	return palabra[num - 1];
}
