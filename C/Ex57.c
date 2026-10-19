#include <stdio.h>
#include <string.h>

int i, salir = 0, vidas = 12, hi_es = 0;
char paraula[200], espais[200], letra;

int main() 
{
    printf("Introduce una palabra: ");
    fgets(paraula, sizeof(paraula), stdin);
    strtok(paraula, "\n");
    
    for(i = 0; i < strlen(paraula); i++) /*Impre solamente 1 vez todos los guiones necesarios para adivinar la palabra*/
    {
        espais[i] = '_'; /*Cada caracter de la palabra, sera la varibale espais cambiada por barrasbajas*/
    }
    
    printf("Tienes un total de 12 vidas. \n");
    do
    {
        for (i = 0; i < strlen(paraula); i++) 
        {
            printf("%c ", espais[i]); /*Imprime la cadena de barrasbajas*/
        }
    
        printf("\nIntroduce una letra: "); 
        scanf(" %c", &letra);  
        fflush(stdin);
        
       	hi_es = 0; /*Cada vez que pase por aqui el valor reinicie*/
       	
        for (i = 0; i < strlen(paraula); i++)
        {
            if (paraula[i] == letra) /*Si coinciden las letras*/
            {
                espais[i] = letra; /*Cambiara ese guion de la posicion que coincide por la letra introducida.*/
                hi_es = 1; /*Detecta que esta con un 1*/
            }
        }
                
        if (hi_es == 1) /*Como ha detectado que esta gracias al uno, envio este mensaje*/
        {
        	printf("\nCorrecto!! La letra: %c esta en la palabra\n",letra);
		}
        
        if (hi_es == 0) /*Si continua un 0 es porque esa letra no esta y le restaremos una vida*/
        { 
        	printf("\nIncorrecto!! Te quedan: %d vidas\n", (vidas--) -1 ); /*Imprimo cuantas vidas le quedan (vidas-- ira restando el 12 de uno en uno*/
		}
        
        
        
        salir = 1; /*Cada vez que pase por aqui el valor reinicie*/ 
        
        for (i = 0; i < strlen(paraula); i++) 
        {
            if (espais[i] == '_') 
            {
                salir = 0;  /*Continua si siguen habiendo barrasbajas por lo tanto salir = 0*/
            }
        }
        
        if (salir == 1) /*Pero cuando el valor de salir = 1, significa que ha adivinado la palabra*/
        {
            printf("Has adivinado la palabra \n");
            break;
        }
        
        if (vidas == 0) /*Cuando las vidas lleguen a 0 parara*/
        {
        	printf("No te quedan vidas\n");
        	break;
		}
        
        
    } while (salir != 1 || vidas != 0 ); /*El bucle continua cuando salir sea diferente a 1 o si vidas es diferente a 0, por lo contrario parara*/
    printf("\nLa palabra es: %s", paraula);
    printf("\nHas salido del programa\n");
}
