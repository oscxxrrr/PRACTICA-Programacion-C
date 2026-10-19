#include <stdio.h>

int num[10], i;

main()
{
	FILE *f;
	
	if ((f = fopen("ficheros\\practica19.txt", "w")) == NULL) 
	{
        printf("ERROR: no puedo abrir el fichero\n");
    }
	else
	{
		for(i = 0; i < 10; i++)
		{
			printf("Numero %d: ", i + 1);
			scanf("%d", &num[i]);
		}
		
		for(i = 0; i < 10; i++)
		{
			num[i] = num[i] * 5;
		}
		
		for(i = 0; i < 10; i++)
		{
			fprintf(f, "%d\n", num[i]);
		}
	}
}
