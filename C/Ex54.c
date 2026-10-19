#include <stdio.h>

int i;
char paraula[200],espais[200], letra;

main()
{
	printf("Introduce una palabra: ");
	fgets(paraula, sizeof(paraula), stdin);
	strtok(paraula, "\n");
	
	for(i = 0; i<strlen(paraula); i++)
	{
		espais[i] = '_';
	}
	
	for (i = 0; i < strlen(paraula); i++)
	{
		printf("%c ", espais[i]);
	}
	
	printf("\nIntroduce una letra: "); 
	scanf("%c", &letra);
	
	for (i = 0; i<strlen(paraula); i++)
	{
		if (paraula[i] == letra)
		
		{
			espais[i] = letra;
		}
	}
	
  	printf("\nResultado: ");
    for (i = 0; i < strlen(paraula); i++)
    {
        printf("%c ", espais[i]);
    }
}



