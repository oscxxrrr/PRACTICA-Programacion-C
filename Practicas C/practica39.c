#include <stdio.h>
#include <locale.h>

int ocult = 21;
int nUsuari;
int i;

main()
{
    for (i = 1; i <= 6; i++)
    {
        printf("Introduce un numero para intentar adivinarlo: ");
        scanf("%d", &nUsuari);
    
        if (nUsuari > ocult) 
        {
            printf("El numero %d es mayor al oculto.\n",nUsuari);
        }
    
        if (nUsuari < ocult) 
        {
            printf("El numero %d es menor al oculto.\n",nUsuari);
        
        }
        
        if (nUsuari == ocult)
        {
            printf("Enhorabuena, el numero %d es el correcto",ocult);
            break; 
        }

        if (i == 6)
        {
            printf("Se te han acabado los intentos");        
        }
    }
}
