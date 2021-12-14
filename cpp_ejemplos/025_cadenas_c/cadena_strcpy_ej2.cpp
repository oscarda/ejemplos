#include <stdio.h>
#include <string.h>

int main (void)
{
	char palabra[10];
	char copia[10];

	printf ("Escriba una palabra: ");
	scanf("%s", &palabra);
	strcpy (copia, palabra);
	printf ("%s", copia);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
