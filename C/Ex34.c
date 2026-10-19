#include <stdio.h>

int opcion;

main()
{	
	printf("Introduce un numero del 1-7: ");
	scanf("%d",&opcion);
	switch(opcion)
	{
	
	case 1:
		printf("El numero 1 pertenece a Lunes");
		break;
	case 2:
		printf("El numero 2 pertenece a Martes");
		break;
	case 3:
		printf("El numero 3 pertenece a Miercoles");
		break;
	case 4:
		printf("El numero 4 pertenece a Jueves");
		break;
	case 5:
		printf("El numero 5 pertenece a Viernes");
		break;
	case 6:
		printf("El numero 6 pertenece a Sabado");
		break;
	case 7:
		printf("El numero 7 pertenece a Domingo");
		break;
	default:
		printf("Introduce un numero valido, del 1-7: ");
		scanf("%d", &opcion);
			if(opcion == 1)
				printf("El numero 1 pertenece a Lunes");
			if(opcion == 2)
				printf("El numero 2 pertenece a Martes");
			if(opcion == 3)
				printf("El numero 3 pertenece a Miercoles");
			if(opcion == 4)
				printf("El numero 4 pertenece a Jueves");
			if(opcion == 5)
				printf("El numero 5 pertenece a Viernes");
			if(opcion == 6)
				printf("El numero 6 pertenece a Sabado");
			if(opcion == 7)
				printf("El numero 7 pertenece a Domingo");
			else
				printf("Numeros validos, vuelve a iniciar el programa.")
	}
}

