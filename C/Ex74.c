#include <stdio.h>

int i, salir = 0, vidas = 12, hi_es = 0, num, cont = 0;
char paraula[200], espais[200], letra;

int main()
{
	
	FILE *f;
	
	if ((f = fopen("FIXERS\\Ex74(animales).txt", "r" )) == NULL ) 
	{
		printf("ERROR: no puedo abrir el fichero\n");
    }
	else
	{
		while ( !feof( f ))
		{
			fscanf(f, "%s\n", &paraula);
			cont++;
		}
		fclose(f);
	}
	
	if ((f = fopen("FIXERS\\Ex74(animales).txt", "r" )) == NULL ) 
	{
		printf("ERROR: no puedo abrir el fichero\n");
    }
	else
	{
		srand(time(NULL));
		num = rand() % cont;
		for (i=0;i<num;i++)
		{
			fgets(paraula, sizeof(paraula), f);
			strtok(paraula, "\n");
		}
		fclose(f);
	}
   
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
