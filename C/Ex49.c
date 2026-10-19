#include <stdio.h>

char opcion, cadena[100], guardar;
int num,i;


main()
{
	do
	{
		system("cls");
		printf("\nMenu Principal: \n a.Introduir el codi de xifrat \n b.Veure el codi \n c.Xifrar una frase\n d.Desxifrar una frase \n e.Sortir \n Elige una opcion: ");
		fflush(stdin);
		scanf("%c", &opcion);
		
		if (opcion == 'a')
		{
			printf("Has entrado en la opcion A: \n");
			printf("Introduce un numero para tu codigo de descifrado: ");
			scanf("%d", &num);
		}
		
		if (opcion == 'b')
		{
			printf("Has entrado en la opcion B: \n");
			printf("El numero de codigo descifrado es: %d\n", num);
			fflush(stdin);
			getchar();
		}
		
		if (opcion == 'c')
		{
			printf("Has entrado en la opcion C: \n");
			fflush(stdin);
			printf("Introduce una frase que quieras cifrar: ");
			fgets(cadena, sizeof(cadena), stdin);
			strtok(cadena,"\n");
			
			printf("La cadena cifrada es: ");
			for (i = 0; i < strlen(cadena); i++)
			{
				guardar = cadena[i] + num;
				if (guardar > 'z')
				{
					guardar = guardar - 26;
				}
				printf("%c", guardar);
			}
			fflush(stdin);
			getchar();
		}
		
		if (opcion == 'd')
		{
			printf("Has entrado en la opcion D: \n");
			fflush(stdin);
			printf("Introduce una frase que quieras descifrar: ");
			fgets(cadena, sizeof(cadena), stdin);
			strtok(cadena,"\n");
			
			printf("La cadena descifrada es: ");
			for (i = 0; i < strlen(cadena); i++)
			{
				guardar = cadena[i] - num;
				if (guardar < 'a')
				{
					guardar = guardar + 26;
				}
				printf("%c", guardar);
			}
			fflush(stdin);
			getchar();
			
		}
		
	}while (opcion != 'e');
	printf("Has salido del ejercicio 49");
}
