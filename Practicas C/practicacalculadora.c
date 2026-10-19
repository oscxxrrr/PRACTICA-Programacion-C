#include <stdio.h>
#include <locale.h>

int opcion;
double resultado,num1,num2;

main()
{
	printf("Menu Principal: \n 1) Suma \n 2) Resta \n 3) Multiplicacion \n 4) Division \n 5) Salir \n Elige la opcion que deseas realizar: ");
	scanf("%d", &opcion);
	while (opcion != 5)
	{
		if (opcion == 1)
		{
			printf("Menu Sumas: \n Introduce un numero: ");
			scanf("%lf", &num1);
			printf("Introduce otro numero: ");
			scanf("%lf", &num2);
			
			resultado = num1 + num2;
			printf("La suma de los numeros %lf + %lf = %lf\n", num1,num2,resultado);
		}
		
		if (opcion == 2)
		{
			printf("Menu Resta: \n Introduce un numero: ");
			scanf("%lf", &num1);
			printf("Introduce otro numero: ");
			scanf("%lf", &num2);
			
			resultado = num1 + num2;
			printf("La suma de los numeros %lf + %lf = %lf\n", num1,num2,resultado);
		}
		
		if (opcion == 3)
		{
			printf("Menu Multiplicacion: \n Introduce un numero: ");
			scanf("%lf", &num1);
			printf("Introduce otro numero: ");
			scanf("%lf", &num2);
			
			resultado = num1 + num2;
			printf("La suma de los numeros %lf + %lf = %lf\n", num1,num2,resultado);
		}
		
			
		if (opcion == 4)
		{
			printf("Menu Divisiones: \n Introduce un numero: ");
			scanf("%lf", &num1);
			printf("Introduce otro numero: ");
			scanf("%lf", &num2);
			
			resultado = num1 + num2;
			printf("La suma de los numeros %lf + %lf = %lf\n", num1,num2,resultado);
		}
		if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4 && opcion != 5 )
		{
			printf("Introduce una opcion valida\n ");
		}
		printf("Menu principal:\n A.Sumar \n B.Restar \n C.Multiplicar \n D.Dividir \n E.Salir \n");
		printf("Introduce el numero de la opcion que deseas hacer: ");
		scanf(" %c", &opcion); 
	}
	printf("Has salido del programa principal");
}
	

