#include <stdio.h>

char primera;
char lletra;
int i;

main()
{
	printf("Lletra 1: ");
	scanf("%c", &lletra);
	primera = lletra;
	
	for(i = 2; i <= 10; i++)
	{
		printf("Lletra %d: ", i);
		fflush(stdin);
		scanf("%c", &lletra);
		
		if (lletra <= primera)
		{
			primera = lletra;	
		}
	}
	printf("De las letras introducidas, la primera del abecedario es: %c", primera);
}
