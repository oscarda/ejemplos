#include <stdio.h>

int main (void)
{
	int numero;

	printf ("Escriba un numero: ");
	scanf ("%d", &numero);

	if (numero >= 1)
	{
		if (numero <=10)
		{
			printf ("%d esta entre 1 y 10.", numero);
		}
	}

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
