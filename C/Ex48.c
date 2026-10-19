#include <stdio.h>
#include <string.h>

char cadena[100];
char cadenainvertida[100];
int i, longitud;

main() 
{
    printf("Introduce una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    strtok(cadena,"\n");
    longitud = strlen(cadena);
    
    for (i = 0; i <= longitud; i++) 
	{
        cadenainvertida[i] = cadena[longitud - 1 - i]; 
    }
    printf("La cadena al revés es: %s\n", cadenainvertida);
}

