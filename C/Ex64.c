#include <stdio.h>

char lalletrax(char paraula[30], int num);

main()
{
	int num;
	char paraula[30];
	
	printf("Introduce una palabra: ");
	fgets(paraula,sizeof(paraula), stdin);
	strtok(paraula, "\n");
	
	printf("Introduce un numero: ");
	scanf("%d", &num);
	
	printf("\nPalabra: %s \nPosicion: %d \nCaracter: %c", paraula, num, lalletrax(paraula,num));
}

char lalletrax(char paraula[30], int num)
{
	return paraula[num - 1];
}
