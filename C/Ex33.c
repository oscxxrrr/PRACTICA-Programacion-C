#include <stdio.h>
#include <locale.h>

char opcion;
double numero;
double suma = 0;

main() {
    setlocale(LC_CTYPE, "Spanish");

    while (opcion != 'n') {
        printf("Introduce un numero: ");
        scanf("%lf", &numero);
        suma = suma + numero;

        printf("Quieres introducir mas numeros? (s/n): ");
        scanf(" %c", &opcion);

        if (opcion != 's' && opcion != 'n') {
            printf("Opción inválida. Introduce 's' o 'n': ");
            scanf(" %c", &opcion);
        }

        if (opcion == 'n') {
            printf("La suma de los numeros es: %lf\n", suma);
            break;
        }
    }
}
