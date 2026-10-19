#include <stdio.h>

double numero;
double cuadrado;

main()
{
	printf ( "Introduze un numero: ");
	scanf ("%lf", &numero); 
	cuadrado = numero * numero;
	
 	printf("El cuadrado del numero: %.2lf", cuadrado);
}

