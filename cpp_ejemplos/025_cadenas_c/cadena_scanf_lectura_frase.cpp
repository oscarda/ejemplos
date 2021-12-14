#include <stdio.h>

int main (void)
{
	/* Declaramos un array para almacenar la cadena. */
	char frase[100];

	/* Pedimos una cadena al usuario y la almacenamos
	con scanf. */
	printf ("Escriba una frase (con scanf) ñ: ");
	scanf ("%s", &frase);	// "%[^\n]s"

	/* Mostramos la cadena almacenada en el array. */
	printf ("\nContenido de frase: %s", frase);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
