#include <stdio.h>

int main (void)
{
	int numero;

	numero = 1;
	while (numero<=6)
	{
		printf ("%d\n", numero);
		numero++;
	}

	/* Esta linea ya esta fuera de la sentencia while. */

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}

