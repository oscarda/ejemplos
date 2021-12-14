#include <stdio.h>

int main (void)
{
	int entero = 10;
	float real = 2.5614;
	char caracter = 'F';

	/* Muestra el valor de la variable caracter. */
	printf ("\n %c", caracter);

	/* Muestra el valor de la variable entero. */
	printf ("\n %d", entero);

	/* Muestra el valor de la variable real. */
	printf ("\n %f", real);

	/* Muestra el valor de la variable real con dos digitos de precision. */
	printf ("\n %.2f", real);

	/* Muestra el valor de la variable entero con una anchura de 10 digitos. */
	printf ("\n %10d", entero);

	/* Muestra el valor de la variable real con una anchura de 10 digitos. */
	printf ("\n %10f", real);

	/* Muestra la direccion de memoria de la variable caracter. */
	printf ("\n %p", &caracter);

    /* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

    return 0;
}
