#include <stdio.h>

int opcio;

main()
{
	printf ( "Que te gusta mas?\n 1- Platja 2-Muntanya y 3-Ciutat:  ");
	scanf ("%d", &opcio); 
	
	if(opcio == 1)
	{
		printf("Aixi que t'agrada mes la platja");
	}
	
	if(opcio == 2)
	{
		printf("Aixi que t'agrada mes la muntanya");
	}
	
	if(opcio == 3)
	{	
		printf("Aixi que t'agrada mes la ciutat");
	}
	
	if(opcio > 3 || opcio < 1)
	{
		printf("No es una opcio valida");
	}

}

