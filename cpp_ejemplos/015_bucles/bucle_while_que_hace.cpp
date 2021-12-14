#include <stdio.h>

int main (void)
{
	int numero;

	numero=1;
	while (numero<=10)
	{
		if (numero%2 != 0)
		{
			printf ("\n%d", numero);
		}

		numero++;
	}

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
