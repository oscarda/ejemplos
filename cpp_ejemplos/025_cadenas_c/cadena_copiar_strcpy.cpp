#include <stdio.h>
#include <string.h>

int main (void)
{
	char saludo[10];

	strcpy(saludo, "Hola");
	printf ("%s", saludo);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
