#include <stdio.h>

digit(char caracter);

main()
{
	char caracter;
	
	printf("Introduce un caracter: ");
	scanf("%c", &caracter);
	
	digit(caracter);
}

digit(char caracter)
{	
	if(caracter <= '9' && caracter > '0')
	{
		printf("Es un digito");
	}
	
	else
	{
		printf("Es una letra");
	}
}
