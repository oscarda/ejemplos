#include <stdio.h>
#include <string.h>

int main (void)
{
	char clave[20];

	do
	{
		printf ("Contraseña: ");
		scanf("%s", clave);
	}
	while (strcmp(clave, "HoLa") != 0);

	printf ("\nAcceso concedido.");

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
