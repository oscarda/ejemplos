#include <stdio.h>

int main (void)
{
	int numero;
	char caracter;

	/* Pedimos un numero de 3 cifras al usuario. */
	printf ("Escriba un numero de maximo 3 cifras: ");

	/* Lee del teclado un n£mero de 3 digitos como maximo
	y lo almacena en la variable numero. */
	scanf ("%3d", &numero);
	/* Limpiamos el buffer del teclado. */
	fflush (stdin);

	/* Mostramos el valor de la variable numero. */
	printf ("El valor de numero es: %d \n", numero);

	/* Pedimos un caracter al usuario. */
	printf ("Escriba un caracter: ");

	/* Lee del teclado un caracter y lo almacena en
	la variable caracter. */
	scanf ("%c", &caracter);

	/* Mostramos el valor de la variable caracter. */
	printf ("El valor de caracter es: %c", caracter);

    /* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

    return 0;
}
