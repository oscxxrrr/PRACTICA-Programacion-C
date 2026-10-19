#include <stdio.h>
#include <locale.h>

char opcion;
double num1, num2,div,mult,suma,resta;


main()
{
	printf("Menu principal:\n A.Sumar \n B.Restar \n C.Multiplicar \n D.Dividir \n E.Salir \n");
	printf("Introduce el numero de la opcion que deseas hacer: ");
	scanf("%c", &opcion);

	while (opcion != 'e') 
	{
		if (opcion == 'a')
		{
			printf("Has entrado en sumas:\n");
			printf("Introduce el primer numero: ");
			scanf("%lf", &num1);
			printf("Introduce el segundo numero: ");
			scanf("%lf", &num2);
			
			suma = num1 + num2;
			printf("El resultado es: %lf + %lf = %lf\n", num1,num2,suma); 
		}
			
		if (opcion == 'b')
		{
			printf("Has entrado en restas:\n");
			printf("Introduce el primer numero: ");
			scanf("%lf", &num1);
			printf("Introduce el segundo numero: ");
			scanf("%lf", &num2);
			
			resta = num1 - num2;
			printf("El resultado es: %lf - %lf = %lf\n", num1,num2,resta);		
		}
		
		if (opcion == 'c')
		{
			printf("Has entrado en multiplicaciones:\n");
			printf("Introduce el primer numero: ");
			scanf("%lf", &num1);
			printf("Introduce el segundo numero: ");
			scanf("%lf", &num2);
			
			mult = num1*num2;
			printf("El resultado es: %lf * %lf = %lf\n", num1,num2,mult);		
		}
		
		if (opcion == 'd')
		{
			printf("Has entrado en divisiones:\n");
			printf("Introduce el primer numero: ");
			scanf("%lf", &num1);
			printf("Introduce el segundo numero: ");
			scanf("%lf", &num2);
			
			div = num1/num2;
			printf("El resultado es: %lf / %lf = %lf\n", num1,num2,div);
		}
		
		if (opcion != 'a' && opcion != 'b' && opcion != 'c' && opcion != 'd' && opcion != 'e' )
		{
			printf("Introduce una opcion valida\n ");
		}
		printf("Menu principal:\n A.Sumar \n B.Restar \n C.Multiplicar \n D.Dividir \n E.Salir \n");
		printf("Introduce el numero de la opcion que deseas hacer: ");
		scanf(" %c", &opcion); 
	}
	printf("Has salido del programa, gracias."); 
}
