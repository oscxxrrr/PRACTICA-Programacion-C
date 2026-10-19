#include <stdio.h>

double numero1;
double numero2;
double mult;

main()
{
	printf ( "Introduze un numero: ");
	scanf ("%lf", &numero1); 
	printf ( "Introduze otro numero: ");
	scanf ("%lf", &numero2);
	mult = numero1 * numero2;
	
 	printf("La multiplicacion de los dos numeros insertados es: %.2lf", mult);
}

