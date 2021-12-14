#include <stdio.h>

int main (void)
{
	int numero, ultimo;

	printf ("Escriba el ultimo numero a mostrar: ");
	scanf ("%d", &ultimo);

	for (numero=1; numero<=ultimo; numero++)
		printf ("%d\n", numero);

	/* Esta linea ya esta fuera de la sentencia for. */

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}

