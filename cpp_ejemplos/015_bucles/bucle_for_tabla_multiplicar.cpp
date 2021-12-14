#include <stdio.h>

int main (void)
{
	int numero, n, resultado;

	printf ("Escriba un numero: ");
	scanf ("%d", &numero);

	printf("\nLa tabla de multiplicar del numero %d es:\n", numero);
	for (n=1; n<=10; n++)
	{
		resultado = n * numero;
		printf ("\n\t%d x %d = %d", n, numero, resultado);
	}

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}


