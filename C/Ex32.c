#include <stdio.h>
#include <locale.h>

double notas;
double media;
double suma = 0;  
int contador;  

main() 
{
    setlocale(LC_CTYPE, "Spanish");

    for(contador = 1; contador <= 5; contador++) 
	{
        printf("Introduce la nota %d: ", contador);  
        scanf("%lf", &notas);
        suma = suma + notas;  
    }

    media = suma / 5;  
    printf("La media de las notas es: %.2lf\n", media);
}

