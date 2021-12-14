#include <stdio.h>


int main (void)
{
	int numero, n, resultado;

	for (numero=1; numero<=10; numero++)
	{
		printf ("\nTabla de multiplicar del %d:", numero);

		for (n=1; n<=10; n++)
		{
			resultado = n * numero;
			printf ("\n\t%d x %d = %d", n, numero, resultado);
		}

		/* Hacemos una pausa hasta que el usuario pulse Intro */
		fflush(stdin);
		printf("\nPulse Intro para finalizar...");
		getchar();
	}

    return 0;
}
