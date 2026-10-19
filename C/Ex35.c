#include <stdio.h>

int x;
int y;
int z;

main() {
  printf("Introduce un numero: ");
  scanf("%d", &x);
  printf("Introduce otro numero: ");
  scanf("%d", &y);
  printf("Introduce un numero mas: ");
  scanf("%d", &z);

  if (x == y && x == z) {
    printf("Los tres números (%d, %d, %d) son iguales.\n", x, y, z);
  } else if (x == y) {
    printf("%d y %d son iguales.\n", x, y);
    if (x > z) {
      printf("%d y %d son mayores que %d.\n", x, y, z);
    } else {
      printf("%d es mayor que %d y %d.\n", z, x, y);
    }
  } else if (x == z) {
    printf("%d y %d son iguales.\n", x, z);
    if (x > y) {
      printf("%d y %d son mayores que %d.\n", x, z, y);
    } else {
      printf("%d es mayor que %d y %d.\n", y, x, z);
    }
  } else if (y == z) {
    printf("%d y %d son iguales.\n", y, z);
    if (y > x) {
      printf("%d y %d son mayores que %d.\n", y, z, x);
    } else {
      printf("%d es mayor que %d y %d.\n", x, y, z);
    }
  } else {
    if (x > y && x > z) {
      printf("%d es el mayor.\n", x);
      if (y > z) {
        printf("%d es el segundo mayor y %d el menor.\n", y, z);
      } else {
        printf("%d es el segundo mayor y %d el menor.\n", z, y);
      }
    } else if (y > x && y > z) {
      printf("%d es el mayor.\n", y);
      if (x > z) {
        printf("%d es el segundo mayor y %d el menor.\n", x, z);
      } else {
        printf("%d es el segundo mayor y %d el menor.\n", z, x);
      }
    } else {
      printf("%d es el mayor.\n", z);
      if (x > y) {
        printf("%d es el segundo mayor y %d el menor.\n", x, y);
      } else {
        printf("%d es el segundo mayor y %d el menor.\n", y, x);
      }
    }
  }
}
