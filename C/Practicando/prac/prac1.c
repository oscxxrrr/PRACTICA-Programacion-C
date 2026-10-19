#include <stdio.h>

int num, i, valor[6], usado[50];

main()
{
	srand(time(NULL));
	
	for(i = 0; i < 6; i++)
	{
		do
		{
			num = rand() % 49 + 1;
		}while(usado[num] == 1);
		
		valor[i] = num;
		usado[num] = 1;
		printf("%d\n", valor[i]);
	}
}
