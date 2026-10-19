#include <stdio.h>

char palabra[40];
char ocult[40];
int i;

main()
{
	printf("Introduce una palabra oculta: ");
	fgets(ocult,sizeof(ocult),stdin);
	strtok(ocult,"\n");
	fflush(stdin);
	do
	{		
		printf("Introduce una palabra para adivinar la oculta: ");
		fgets(palabra,sizeof(palabra),stdin);
		strtok(palabra,"\n");
		
		if(strcmp(palabra,ocult) != 0)
		{
			printf("La puerta esta cerrada\n");
		}
	}while(strcmp(palabra,ocult) != 0);
	printf("Puerta abierta");
}
