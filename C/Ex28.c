#include <stdio.h>

int numeros;

main() {
		printf("Los numeros pares que hay entre 1-100 son: ");
        for (numeros = 0; numeros <= 100; numeros = numeros + 2) 
		{
        printf("%d\n ", numeros);
    	}
}
