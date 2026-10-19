#include <stdio.h>

char letra;

main()
{	
	printf("Introduce una letra: ");
	scanf("%c",&letra);
	if (letra == 'a')
		printf("La letra %c, es correcta", letra);
	
	if(letra!='a')
		printf("La letra %c, no es correcta, porque no es 'a'.", letra);
}

