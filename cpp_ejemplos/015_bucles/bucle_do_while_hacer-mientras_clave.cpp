#include <stdio.h>

const int CLAVE = 123;

int main (void)
{
	int numero;

	do
	{
		printf ("Escriba la contraseņa: ");
		scanf ("%d", &numero);
	}
	while (numero != CLAVE);

	/* Esta linea ya esta fuera de la sentencia do-while. */

	printf ("La contraseņa es correcta");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}

