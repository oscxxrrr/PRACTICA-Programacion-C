#include <stdio.h>

char letra;

main()
{	
	printf("Introduce una letra: ");
	scanf("%c",&letra);
	if (letra == 'a' || letra == 'e' || letra == 'i'|| letra == 'o'|| letra == 'u')
		printf("La letra %c, es una vocal", letra);
	
	else
		printf("La letra %c, es una consonante", letra);
}

