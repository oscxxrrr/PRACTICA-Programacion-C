#include <stdio.h>

double real;
char caracter;

main()
{
	printf ( "Introduze un caracter: ");
	scanf ("%c", &caracter); 
	printf ( "Introduze un numero: ");
	scanf ("%lf", &real); 
	
 	printf("Caracter introducido: %c\n", caracter);
    printf("Numero introducido: %.2lf", real); 
}


