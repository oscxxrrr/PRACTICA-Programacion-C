#include <stdio.h>
#include <locale.h>

char cadena[10] = "endavant";
char paraula[30];

main()
{
	printf("Introduce una palabra para intentar adivinarla: ");
	fgets(paraula, sizeof(paraula), stdin);
	strtok(paraula,"\n");

	if (strcmp(paraula,"endavant") != 0)
	{
		printf("Torna a provar");
	}
	
	if (strcmp(paraula,"endavant") == 0)
	{
		printf("La porta esta oberta");
	}

}
