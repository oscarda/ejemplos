#include <stdio.h>
int main (void)
{
	int opcion;

	printf("\n\tMENU\n");
	printf(" ------------------\n");
	printf(" 1 Juego nuevo\n");
	printf(" 2 Abrir juego\n");
	printf(" 3 Guardar juego\n");
	printf(" 4 Ver puntuaciones\n");
	printf(" 0 Salir\n");
	printf("\n");
	printf(" Escriba el numero de una opcion (0-4): ");
	scanf("%d", &opcion);

	switch (opcion)
	{
		case 1:	printf("\n Ha elegido la opcion: Juego nuevo.");
			break;

		case 2:	printf("\n Ha elegido la opcion: Abrir juego.");
			break;

		case 3:	printf("\n Ha elegido la opcion: Guardar juego.");
			break;

		case 4:	printf("\n Ha elegido la opcion: Ver puntuaciones.");
			break;

		case 0:	printf("\n Ha elegido la opcion: Salir.");
			break;

		default: printf("\n Ha elegido una opcion no valida.");
	}

	/* Esta linea ya esta fuera de la sentencia switch. */

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
