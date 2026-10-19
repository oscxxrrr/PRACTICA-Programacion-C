#include <stdio.h>

int  i, cont = 0,numeros[50], suma = 0;
double mitja = 0, diferencia[10];
char opcion;

main()
{
	do
	{
		printf("Introduce un numero: ");
		scanf("%d", &numeros[cont]);
		suma = suma + numeros[cont];
		cont ++;
		
		fflush(stdin);
		printf("Quieres introducir mas numeros? (s/n): ");
		scanf("%c", &opcion);
		
	}while(opcion != 'n');
	
	mitja = suma / (double)cont;
	
	for (i = 0; i < cont; i++)
	{
		diferencia [i]= numeros[i] - mitja;
	}
	
	printf("\nHas introducido: %d numeros \nSu suma es: %d\nSu media es: %.2lf", cont, suma, mitja);
	printf("\n\nNombres     Diferencia\n-------     ----------");
	for (i = 0; i < cont; i++)
	{
		printf("\n%4d\t     %5.2lf", numeros[i], diferencia[i]);
	}
}
