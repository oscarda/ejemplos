#include <stdio.h>
#include <string.h>

//Error 1: el que está en código
//Error 2: escribir un nombre más largo de 9 letras

int main (void)
{
	char nombre [10];
	char saludo [20];
	char cadena_demasiado_corta[5];

	printf ("Escriba su nombre: ");
	scanf("%s", nombre);
	strcpy (saludo, "Hola ");	
	strcat (saludo, nombre);
	printf ("%s\n", saludo);
	
	//provocamos un error
	strcpy (cadena_demasiado_corta, "1234567890");
	printf ("cadena_demasiado_corta: %s\n", cadena_demasiado_corta);
	printf ("saludo: %s\n", saludo);
	printf ("nombre: %s\n", nombre);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
