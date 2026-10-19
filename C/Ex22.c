#include <stdio.h>

double pi = 3.141592;
int opcio;
double radio;
double areaC;
double alturaT;
double baseT;
double areaT;
double ladoR;
double baseR;
double areaR;

main()
{
	printf ( "Que area quieres calcular?\n 1- Circulo 2-Triangulo y 3-Rectangulo:  ");
	scanf ("%d", &opcio); 
	
	if(opcio == 1)
	{
		printf("Vamos a caclularte el area del ciclulo: \n");
		printf("Dime cuanto mide el radio del circulo que deseas calcular: \n");
		scanf("%lf",&radio);
		areaC = (radio * radio) * pi;
		printf("El area del circulo es: %lf", areaC);
	}
	
	if(opcio == 2)
	{
		printf("Vamos a calcularte el area del triangulo: \n");
		printf("Dime la altura del triangulo: ");
		scanf("%lf", &alturaT);
		printf("Ademas, dime la medida de la base del triangulo: \n");
		scanf("%lf", &baseT);
		areaT = (baseT * alturaT) / 2;
		printf("El area del triangulo es: %lf",areaT);
	}
	
	if(opcio == 3)
	{	
		printf("Vamos a calcularte el area del rectangulo: \n");
		printf("Dime la altura de un lado de tu rectangulo: \n");
		scanf("%lf",&ladoR);
		printf("Tambien dime la medida de la base de tu rectangulo: \n");
		scanf("%lf",&baseR);
		areaR = (ladoR * baseR) / 2;
		printf("El area del rectangulo es: %lf",areaR);
	}
}
