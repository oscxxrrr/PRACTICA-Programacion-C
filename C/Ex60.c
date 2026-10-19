#include <stdio.h>
#include <string.h> 

main() 
{
    char palabra[30];
    
    printf("Introduce una palabra: ");
    fgets(palabra, sizeof(palabra), stdin);
    strtok(palabra, "\n");
    
    contar_vocales(palabra);
}

int contar_vocales(char palabra[30]) 
{
    int cont = 0, i ;
    
    for (i = 0; i < strlen(palabra); i++) 
	{
        if (palabra[i] == 'a' || palabra[i] == 'e' || palabra[i] == 'i' || palabra[i] == 'o' || palabra[i] == 'u')
        {
            cont++;
        }
    }
    printf("La palabra: %s \nContiene: %d vocales\n", palabra, cont);
}

