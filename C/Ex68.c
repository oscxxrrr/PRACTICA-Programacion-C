#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numeros[4], numrand[4], salir = 0, i;
int correcto = 0, incorrecto = 0, casi = 0;
int num_usado[4];

int main()
{
    srand(time(NULL)); 
    
    for (i = 0; i < 4; i++)
    {
        numrand[i] = rand() % 10; 
    }
    
    do
    {   
        for(i = 0; i < 4; i++)
        {
            printf("Numero %d: ", i + 1);
            scanf("%d", &numeros[i]);
        }
        
        for (i = 0; i < 4; i++)
        {
            if (numeros[i] == numrand[i])
            {
                correcto++; 
                num_usado[i] = 1;    
            }
        }
        
        printf("Numeros correctos: %d\n", correcto);
        printf("Numeros incorrectos: %d\n", 4 - encerts_correctes - encerts_posicion_incorrecta);
        printf("Estan pero no donde toca: %d\n", incorrecto);

        if (correcto == 4)
        {
            salir = 1;
        }
        
    } while(salir != 1);
    printf("Palabra completada");
}

