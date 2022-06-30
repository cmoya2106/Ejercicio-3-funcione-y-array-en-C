//Carlos Moya C.I: 31317884
//Ejercicio 3 Funciones 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char cadena [30];
	printf("Ingresar cadena de caracteres: ");
	fgets(cadena,30,stdin);
	strrev(cadena); 
	printf("La cadena invertida es:");
	puts(cadena);
	
	return 0;
}
