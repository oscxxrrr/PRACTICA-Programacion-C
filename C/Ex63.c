#include <stdio.h>

laterceralletra(char paraula[30]);

main()
{
	char paraula[30];
	
	printf("Introduce una palabra: ");
	fgets(paraula,sizeof(paraula), stdin);
	strtok(paraula, "\n");
	laterceralletra(paraula);
}

laterceralletra(char paraula[30])
{
	printf("La tercera letra es --> %c", paraula[2]);
}
