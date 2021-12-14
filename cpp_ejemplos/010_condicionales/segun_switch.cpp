#include <stdio.h>

int main (void)
{
	char vocal;

	/* Pedimos una vocal al usuario. */
	printf ("Escriba en minuscula una vocal: ");
	scanf ("%c", &vocal);

	/* Segun la vocal mostramos un mensaje u otro. */
	switch (vocal)
	{
		case 'a':	printf ("Ha escrito la vocal: a.");
							break;
		case 'e':	printf ("Ha escrito la vocal: e.");
							break;
		case 'i':	printf ("Ha escrito la vocal: i.");
							break;
		case 'o':	printf ("Ha escrito la vocal: o.");
							break;
		case 'u':	printf ("Ha escrito la vocal: u.");
							break;
		default:	printf ("No ha escrito una vocal minuscula.");
	}
	/* Esta linea ya esta fuera de la sentencia switch. */

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
