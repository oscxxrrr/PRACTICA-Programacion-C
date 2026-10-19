#include <stdio.h>

main() 
{ 

    int i, num, valor[6], usado[50];

    srand(time(NULL));

    for (i = 0; i < 6; i++) 
	{
        do 
		{
            num = rand() % 6; 
        } while (usado[num] == 1); 

        valor[i] = num; 
        usado[num] = 1;
        printf("%d\n", valor[i]);
    }
}

