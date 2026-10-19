#include <stdio.h>

int hi_es = 0, i;
char cadena[20], letra;

main()
{
	printf("Introduce una palabra: ");
	fgets(cadena,sizeof(cadena),stdin);
	strtok(cadena, "\n");
	fflush(stdin);
	
	printf("Introduce una letra: ");
	scanf("%c", &letra);
	
	for (i = 0; i<=strlen(cadena); i++ )
	{
		if (cadena[i] == letra)
		{
			hi_es = 1;
			printf("Esta en la/s posicion/es: %d\n ", i + 1);
		}
	}
	if (hi_es == 1)
	{
		printf("La letra = %c SI esta en la palabra = %s ", letra, cadena);
	}
	
	else
	{
		printf("La letra = %c NO esta en la palabra = %s ", letra, cadena);
	}
	
}
