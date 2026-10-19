#include <stdio.h>

int num, i;
char opcion, paraula[50], guardar;

main()
{
	do
	{
		printf("Menu Principal: \n a) Introduce un numero: \n b) Enseñar el numero: \n c) Cifrar una frase \n d) Descrifrar una frase \n e) Salir \n Elige una opcion: ");
		fflush(stdin);
		scanf("%c", &opcion);
	
		if (opcion == 'a')
		{
			fflush(stdin);
			printf("Introduce un numero: ");
			scanf("%d", &num);
			fflush(stdin);
		}
		
		if (opcion == 'b')
		{
			printf("El numero introducido es: %d", num);
			fflush(stdin);
		}
		
		if (opcion == 'c')
		{
			fflush(stdin);
			printf("Introduce una palabra: ");
			fgets(paraula,sizeof(paraula), stdin);
			strtok(paraula, "\n");
			
			printf("La palabra cifrada es: ");
			for( i = 0; i<strlen(paraula); i++)
			{
				guardar = paraula[i] + num;
				
				if (guardar > 'z')
				{
					guardar = guardar - 26;
				}
				printf("%c", guardar);
			}
			fflush(stdin);		
		}
		
		if (opcion == 'd')
		{
			fflush(stdin);
			printf("Introduce una palabra cifrada: ");
			fgets(paraula,sizeof(paraula), stdin);
			strtok(paraula, "\n");
			printf("La palabra descifrada es: ");
			for( i = 0; i<strlen(paraula); i++)
			{
				guardar = paraula[i] - num;
				
				if (guardar < 'a')
				{
					guardar = guardar + 26;
				}
				printf("%c", guardar);
			}
			fflush(stdin);			
		}
	}while(opcion != 'e');
	printf("Has salido del programa");	
}
