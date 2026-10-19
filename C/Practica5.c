#include <stdio.h>
int hi_es = 0, i;
char letra, palabra[30];

main()
{
	printf("Introduce una palabra: ");
	fgets(palabra,sizeof(palabra), stdin);
	strtok(palabra,"\n");
	fflush(stdin);
	
	printf("Introduce una letra: ");
	scanf("%c", &letra);
	
	for (i = 0; i<=strlen(palabra); i++)
	{
		if (palabra[i] == letra)
		{
			hi_es = 1;
			printf("Esta en la/s posicion/es = %d\n", i + 1);
		}
	}
	
	if (hi_es == 1)
	{
		printf("La letra: '%c' SI esta en la palabra: '%s'", letra,palabra);
	}
	
	else
	{
		printf("La letra: '%c' NO esta en la palabra: '%s'", letra,palabra);
	}
	
}
