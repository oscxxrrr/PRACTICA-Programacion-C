#include <stdio.h>

int main()  
{
    int opcion;
    
    do {
    	printf("Menu principal: \n 1. Pasar pulgadas a cm \n 2. Pasar cm a pulgadas \n 3. Salir \n Elige una opcion: ");
    	scanf("%d", &opcion);
    	
        if (opcion == 1) {
            int pol;
            printf("\nIntroduce un numero en pulgadas: ");
            scanf("%d", &pol);
            pol_cm(pol);
        }
        
        if (opcion == 2) {
            int cm;
            printf("\nIntroduce un numero en cm: ");
            scanf("%d", &cm);
            cm_pol(cm);
        }

    } while (opcion != 3);

    printf("Has salido del programa\n");
    return 0;
}

int cm_pol(int cm)
{
    float resultado = cm / 2.54;
    printf("%d cm --> %.2f pulgadas\n", cm, resultado);
    
}

int pol_cm(int pol)
{
    float resultado = pol * 2.54;
    printf("%d pulgadas --> %.2f cm\n", pol, resultado);
    
}

