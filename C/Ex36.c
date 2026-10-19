#include <stdio.h>

int num;
int i;
int petit = 0;
int grande = 0;

main()
{
	printf("Nombre 1: ");
	scanf("%d", &num);	
	grande = num;
	petit = num;
	
	for(i = 2; i <= 10; i++)
	{
		printf("Nombre %d: ",i);
		scanf("%d", &num);
		
		if (num <= petit)
		{
			petit = num;	
		}
			
			
		if (num >= grande)
		{
			grande = num;	
		}
	}
	

		
	printf("El numero menor es: %d y el numero mas grande es: %d", petit,grande);
}
