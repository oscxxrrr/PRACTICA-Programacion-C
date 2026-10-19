#include <stdio.h>

int digit(char caracter);

int main()  
{
    char caracter;
    
    printf("Introduce un caracter: ");
    scanf("%c", &caracter);  
    digit(caracter);
    return 0;
}

int digit(char caracter)
{
	if (caracter >= '0' && caracter <= '9') 
	{
	    return printf("El caracter '%c' es un digito.\n", caracter);
	} 
	else 
	{
		return printf("El caracter '%c' es una letra.\n", caracter);
	}   
}

