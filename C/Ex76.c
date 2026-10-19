#include <stdio.h>

int contL = 0, contV = 0, contN = 0, contE = 0, i;
char cadena[50];
main()
{
	FILE *f;
		
	if ((f = fopen("FIXERS\\el_quijote.txt", "r")) == NULL) 
	{
	    printf("ERROR: no puedo abrir el fichero\n");
	}
	   
	else
	{
		while ( !feof( f ))
		{
			fgets(cadena, sizeof(cadena), f);
			strtok(cadena, "\n");
			for(i = 0; i<strlen(cadena); i++)
			{
				if (cadena[i] == 'a' ||cadena[i] == 'A' ||cadena[i] == 'e' ||cadena[i] == 'E' ||cadena[i] == 'i' ||cadena[i] == 'I' ||cadena[i] == 'o' ||cadena[i] == 'O' ||cadena[i] == 'u' ||cadena[i] == 'U')
				{
					contV++;
					contL++;
				}
				
				if (cadena[i] == 'a' || cadena[i] == 'A' || cadena[i] == 'e' || cadena[i] == 'E' || 
					cadena[i] == 'o' || cadena[i] == 'O' || cadena[i] == 'u' || cadena[i] == 'U' || cadena[i] == 'i' || cadena[i] == 'I' ||
					cadena[i] == 'b' || cadena[i] == 'B' || cadena[i] == 'c' || cadena[i] == 'C' || cadena[i] == 'd' || cadena[i] == 'D' || 
				    cadena[i] == 'f' || cadena[i] == 'F' || cadena[i] == 'g' || cadena[i] == 'G' || cadena[i] == 'h' || cadena[i] == 'H' || 
				    cadena[i] == 'j' || cadena[i] == 'J' || cadena[i] == 'k' || cadena[i] == 'K' || cadena[i] == 'l' || cadena[i] == 'L' || 
				    cadena[i] == 'm' || cadena[i] == 'M' || cadena[i] == 'n' || cadena[i] == 'N' || cadena[i] == 'p' || cadena[i] == 'P' || 
				    cadena[i] == 'q' || cadena[i] == 'Q' || cadena[i] == 'r' || cadena[i] == 'R' || cadena[i] == 's' || cadena[i] == 'S' || 
				    cadena[i] == 't' || cadena[i] == 'T' || cadena[i] == 'v' || cadena[i] == 'V' || cadena[i] == 'w' || cadena[i] == 'W' || 
				    cadena[i] == 'x' || cadena[i] == 'X' || cadena[i] == 'y' || cadena[i] == 'Y' || cadena[i] == 'z' || cadena[i] == 'Z') 
				{
				    contL++;
				}
				
				if(cadena[i] == '0'||cadena[i] == '1'||cadena[i] == '2'||cadena[i] == '3'||cadena[i] == '4'||cadena[i] == '5'||cadena[i] == '6'
				|| cadena[i] == '7'||cadena[i] == '8'||cadena[i] == '9')
				{
					contN++;
				}
				if(cadena[i] == ' ')
				{
					contE++;
				}
			}
		}
	}
	fclose(f);
	printf("El libro de don quijote contiene:\n a) Caracter totales: %d \n b) Caracter vocales: %d \n c) Caracter numero: %d \n d) Cantidad de palabras: %d", contL, contV, contN, contE + 1);
}
