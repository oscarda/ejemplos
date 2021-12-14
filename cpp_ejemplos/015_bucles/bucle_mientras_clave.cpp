#include <stdio.h>
#define CLAVE 123

int main (void)
{
	int numero;

	printf ("Escriba la contraseña: ");
	scanf ("%d", &numero);

	while (numero != CLAVE)
	{
		printf ("La contraseña es incorrecta.\n");
		printf ("Escriba la contraseña: ");
		scanf ("%d", &numero);
	}

	/* Esta línea ya está fuera de la sentencia while. */

	printf ("La contraseña es correcta");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}

