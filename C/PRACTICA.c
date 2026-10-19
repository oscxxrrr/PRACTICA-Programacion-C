#include <stdio.h>

char palabra[30], ocult[30];
int i;

main()
{
	printf("Introduce una palabra oculta: ");
	fgets(ocult, sizeof(ocult), stdin);
	strtok(ocult, "\n");
	do
	{
		printf("Introduce una palabra para adivinar: ");
		fgets(palabra, sizeof(palabra), stdin);
		strtok(palabra, "\n");
		
		if(strcmp(palabra,ocult)!=0)
		{
			printf("INCORRECTO\n");
		}
	}while(strcmp(palabra,ocult)!=0);
	printf("CORRECTO");
}
