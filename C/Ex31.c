#include <stdio.h>
#include <locale.h>

int opcion;
int edat;
int anys;

main() 
{
    setlocale(LC_CTYPE, "Spanish");
    while (opcion != 3)
	{
        printf("Elige la opcion que deseas (1- año nacimiento 2- Informacion 3- Salir): ");
        scanf("%d", &opcion);
        printf("Has elegido la opcion: %d\n", opcion);

        if(opcion == 1) 
		{
            printf("Cuantos años tienes? \n");
            scanf("%d", &anys);
            edat = 2024 - anys;
            printf("Has nacido en el año %d\n", edat);
        }
        
        if(opcion == 2) 
		{
            printf("Hola, que tal\n");
        }
        
        if(opcion == 3) 
		{
            printf("Has salido del ejercicio\n");
            break;
        } 
	}
}

