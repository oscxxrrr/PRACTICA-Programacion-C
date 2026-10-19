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
			int pulgadas;
			printf("Introduce el numero (pulgadas): ");
			scanf("%d", &pulgadas);
			pulgadas_cm(pulgadas);
		}
		
		if(opcion == 2)
		{
			int cm;
			printf("Introduce el numero (cm): ");
			scanf("%d", &cm);
			cm_pulgadas(cm);
		}
		
	}while(opcion != 3);
	printf("Saliendo ...");
}

pulgadas_cm(int pulgadas)
{	
	double resultado;
	resultado = pulgadas * 2.54;
    printf("%d pulgadas --> %.2f cm\n", pulgadas, resultado);
}

cm_pulgadas(int cm)
{
	double resultado;
	resultado = cm / 2.54;
    printf("%d cm --> %.2f pulgadas\n", cm, resultado);
}
