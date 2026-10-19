#include <stdio.h>

main()
{
	int opcion;
	
	do
	{
		printf("\nMenu principal: \n 1) pulgadas --> cm \n 2) cm --> pulgadas \n 3) Salir \n Elige una opcion: ");
		scanf("%d", &opcion);
		
		if(opcion == 1)
		{
			double pulgadas;
			printf("Introduce el numero (pulgadas): ");
			scanf("%lf", &pulgadas);
			pulgadas_cm(pulgadas);
		}
		
		if(opcion == 2)
		{
			double cm;
			printf("Introduce el numero (cm): ");
			scanf("%lf", &cm);
			cm_pulgadas(cm);
		}
		
	}while(opcion != 3);
	printf("Saliendo ...");
}

pulgadas_cm(double pulgadas)
{	
	double resultado;
	resultado = pulgadas * 2.54;
    printf("%f pulgadas --> %.2f cm\n", pulgadas, resultado);
}

cm_pulgadas(double cm)
{
	double resultado;
	resultado = cm / 2.54;
    printf("%lf cm --> %.2f pulgadas\n", cm, resultado);
}
