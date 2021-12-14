#include <stdio.h>
#include <string.h>

int main (void)
{
	/* Declaramos un array para cada cadena. */
	char palabra1[20];
	char palabra2[20];

	/* Pedimos la palabra1 al usuario. */
	printf ("Escriba la palabra1: ");
	gets (palabra1);

	/* Pedimos la palabra2 al usuario. */
	printf ("Escriba la palabra2: ");
	gets (palabra2);

	/* Comprobamos si la palabra1 es menor que la palabra2. */
	if (strcmp(palabra1, palabra2) < 0)
		printf ("\nLa palabra1 es menor que la palabra2.");
	else
		printf ("\nLa palabra2 es menor que la palabra1.");

	/* Comprobamos si la palabra1 es mayor que la palabra2. */
	if (strcmp(palabra1, palabra2) > 0)
		printf ("\nLa palabra1 es mayor que la palabra2.");
	else
		printf ("\nLa palabra2 es mayor que la palabra1.");

	/* Comprobamos si la palabra1 es igual que la palabra2. */
	if (strcmp(palabra1, palabra2) == 0)
		printf ("\nLa palabra1 es igual que la palabra2.");
	else
		printf ("\nLa palabra1 es distinta de la palabra2.");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
