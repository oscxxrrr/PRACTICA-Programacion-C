#include <stdio.h>
#include <string.h>

int i, salir = 0, vidas = 12, hi_es = 0, num;
char paraula[200], espais[200], letra;
char paraulesocultes[20][20] = {"perro", "gato", "elefante", "tigre", "leon", "jirafa", "conejo", "caballo", "delfin", "ballena", "lobo",
 "aguila", "tortuga", "cebra", "mono", "oso", "serpiente", "cocodrilo", "panda", "camello", "buho" };

main() 
{
	srand(time(NULL)); 
    num = rand() % 20;
    strcpy(paraula, paraulesocultes[num]);
	    
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
        fflush(stdin);
        
       	hi_es = 0;
       	
        for (i = 0; i < strlen(paraula); i++)
        {
            if (paraula[i] == letra)
            {
                espais[i] = letra;
                hi_es = 1; 
            }
        }
                
        if (hi_es == 1)
        {
        	printf("\nCorrecto!! La letra: %c esta en la palabra\n",letra);
		}
        
        if (hi_es == 0) 
        { 
        	printf("\nIncorrecto!! Te quedan: %d vidas\n", (vidas--) -1 ); 
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
    printf("\nLa palabra es: %s", paraula);
    printf("\nHas salido del programa\n");
}
