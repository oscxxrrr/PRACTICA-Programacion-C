#include <stdio.h>

int numero;
int i;

main() {
    printf("Introduce un numero: ");
    scanf("%d", &numero);
    printf("Numeros desde %d hasta 1:\n", numero);
    
    if (numero > 1) 
    {
        for (i = numero; i >= 1; i--) 
		{
            printf("%d\n", i);
        } 
	}
	
    if (numero < 1) 
    {
       	for (i = numero; i <= 1; i++) 
		{
            printf("%d\n", i);
        }
	}
    
    if (numero == 1) 
        printf("El numero es 1.\n");
}

