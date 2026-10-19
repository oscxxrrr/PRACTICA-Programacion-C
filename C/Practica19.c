#include <stdio.h>

main()
{
	int numero[10], i;
	
	FILE *f;
	
	if((f = fopen("ficheros\\practica19.txt", "w") == NULL))
	{
		printf("ERROR");
	}
	
	else
	{
		for(i = 0; i < 10; i++)
		{
			printf("Numero %d: ", i + 1);
			scanf("%d", &numero[i]);
		}
		
		for(i = 0; i < 10; i++)
		{
			numero[i] = numero[i] * 5;
			fprintf(f, "%d\n", numero[i]);
		}
	}
}
