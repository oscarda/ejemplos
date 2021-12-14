#include <stdio.h>

int main (void)
{
	int numero, doble;
	char letra;

	do
	{
		printf ("\nEscriba un numero: ");
		scanf ("%d", &numero);
		fflush(stdin);

		doble = numero * 2;
		printf ("\nEl doble de %d es: %d.", numero, doble);

		printf ("\n\n¨Desea calcular el doble de otro numero? (S/N): ");
		scanf ("%c", &letra);
		fflush(stdin);
	}
	while ((letra=='s') || (letra=='S'));

	/* Esta linea ya esta fuera de la sentencia do-while. */

	return 0;
}
