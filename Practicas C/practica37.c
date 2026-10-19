#include <stdio.h>

char lletra, primera;
int i;

main()
{
	printf("Lletra 1: ");
	scanf("%c", & lletra);
	primera = lletra;
	
	for (i = 2; i <= 10; i++)
	{
		printf("Lletra %d: ", i);
		fflush(stdin);
		scanf("%c", &lletra);
		
		if (lletra <= primera)
		{
			primera = lletra;
		}
	}
	printf("La primera letra por orden de alfabeto es: %c", primera);
}
