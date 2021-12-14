#include <stdio.h>

int main (void)
{
	char letras[10];	/* Para almacenar los caracteres. */
	int celda;			/* Para almacenar el numero de la celda. */
	int contador; 		/* Para contar las 'a' o 'A'. */

	/* Pedimos caracteres al usuario y los almacenamos en las
	celdas del array letras. */
	for (celda=0; celda<10; celda++)
	{
		printf ("Escriba un caracter para la celda %d: ", celda);
		scanf ("%c", &letras[celda]);
		fflush (stdin);
	}

	/* Antes de empezar a contar las 'a' o 'A' ponemos la variable
	contado con el valor 0. */
	contador = 0;

	/* Recorremos el array en busca de 'a' o 'A'. Si las encontramos
	aumentamos el valor de la variable contador, que es la que
	lleva la cuenta de cuantas hay. */
	for (celda=0; celda<10; celda++)
	{
		if ((letras[celda] == 'a') || (letras[celda] == 'A'))
			contador++;
	}

	/* Mostramos un mensaje indicando el numero de 'a' o 'A'
	que se han encontrado. */
	printf ("\nHay %d \'a\' o \'A\'.", contador);

    /* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
