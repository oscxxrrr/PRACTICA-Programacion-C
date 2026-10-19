#include <stdio.h>

digit_o_no(char caracter);

main()
{
	char caracter;
	
	printf("Introduce un caracter: ");
	scanf("%c", &caracter);
	
	digit_o_no(caracter);
	return 0;

}

digit_o_no(char caracter)
{
	if(caracter <= '9' && caracter >= '0')
	{
		printf("Es un digito");
	}
	else
	{
		printf("Es una letra");
	}
		
}

