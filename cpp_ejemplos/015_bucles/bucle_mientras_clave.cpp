#include <stdio.h>
#define CLAVE 123

int main (void)
{
	int numero;

	printf ("Escriba la contrase�a: ");
	scanf ("%d", &numero);

	while (numero != CLAVE)
	{
		printf ("La contrase�a es incorrecta.\n");
		printf ("Escriba la contrase�a: ");
		scanf ("%d", &numero);
	}

	/* Esta l�nea ya est� fuera de la sentencia while. */

	printf ("La contrase�a es correcta");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}

