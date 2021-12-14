#include <stdio.h>

int main (void)
{
	int numero;

	for (numero=1; numero<=6; numero++)
	{
		printf ("%d\n", numero);
	}

	/* Esta linea ya esta fuera de la sentencia for. */

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
