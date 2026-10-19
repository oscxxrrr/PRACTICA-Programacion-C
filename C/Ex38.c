#include <stdio.h>
#include <locale.h>

int ocult = 69;
int nUsuari;

main()
{
	printf("Introduce un numero para intentar adivinarlo: ");
	scanf("%d", &nUsuari);
	
	if (nUsuari > ocult) 
	{
		printf("El numero %d es mayor al oculto.",nUsuari);
	}
	
	if (nUsuari < ocult) 
	{
		printf("El numero %d es menor al oculto.",nUsuari);
		
	}
	if (nUsuari == ocult)
	{
		printf("Enhorabuena, el numero %d es el correcto",ocult);
	}
}

