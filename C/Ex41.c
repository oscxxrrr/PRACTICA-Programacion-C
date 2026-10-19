#include <stdio.h>
#include <locale.h>

char nombre[15];

main()
{
	printf("Introduce tu nombre: ");
	fgets(nombre,sizeof(nombre),stdin);
	strtok(nombre, "\n");
	printf("Hola, %s",nombre);
}
