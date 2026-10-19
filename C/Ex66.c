#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()
{
    int i, num, contX, cont1, cont2;
    
    srand(time(NULL));  
    
    printf("La quiniela: \n");
    
    for (i = 0; i < 14; i++) 
    {
        num = rand() % 3;  

        if (num == 1)
        {
            printf("Partido %2d: | 1 |   |   |\n", i+1);
            printf("-------------------------\n");
            cont1++;
        }
        
        if (num == 0)
        {
            printf("Partido %2d: |   | X |   |\n", i+1);
            printf("-------------------------\n");
            contX++;
        }
        
        if (num == 2)
        {
            printf("Partido %2d: |   |   | 2 |\n", i+1);
            printf("-------------------------\n");
            cont2 ++;
        }   
    }
    
    printf("Cantidad de 1: %d\n", cont1);
    printf("Cantidad de X: %d\n", contX);
    printf("Cantidad de 2: %d\n", cont2);
}

