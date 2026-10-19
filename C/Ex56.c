#include <stdio.h>
#include <string.h>

int i, salir = 0, vidas = 12;
char paraula[200], espais[200], letra;

int main() 
{
    printf("Introduce una palabra: ");
    fgets(paraula, sizeof(paraula), stdin);
    strtok(paraula, "\n");
    
    for(i = 0; i < strlen(paraula); i++)
    {
        espais[i] = '_';
    }
    
    printf("Tienes un total de 12 vidas. \n");
    do
    {
        for (i = 0; i < strlen(paraula); i++)
        {
            printf("%c ", espais[i]);
        }
    
        printf("\nIntroduce una letra: "); 
        scanf(" %c", &letra); 
		vidas--;
		printf("\nTe quedan: %d vidas\n", vidas); 
        fflush(stdin);
        
        for (i = 0; i < strlen(paraula); i++)
        {
            if (paraula[i] == letra)
            {
                espais[i] = letra;
            }
        }
        
        salir = 1;  
        
        for (i = 0; i < strlen(paraula); i++) 
        {
            if (espais[i] == '_') 
            {
                salir = 0;   
            }
        }
        
        if (salir == 1)
        {
            printf("Has adivinado la palabra \n");
            break;
        }
        
        if (vidas == 0)
        {
        	printf("No te quedan vidas\n");
        	break;
		}
        
        
    } while (salir != 1 || vidas != 0 ); 
    printf("La palabra es: %s", paraula);
    printf("\nHas salido del programa\n");
}
