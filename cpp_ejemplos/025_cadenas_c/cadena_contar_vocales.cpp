#include <stdio.h>

int main (void)
{
	char frase[100];
	int celda;
	int contador = 0;

	/* Pedimos una frase al usuario y la almacenamos en
	el array frase. */
	printf ("Escriba una frase: ");
	gets (frase);

	/* Para recorrer el array empezamos en la celda 0. */
	celda=0;

	/* Recorremos el array mientras el contenido de la
	celda sea distinto del caracter de fin de cadena,
	es decir, mientras no lleguemos al final de la cadena. */
	while (frase[celda]!='\0')
	{
		/* Si en la celda encontramos el caracter 'a' o 'A'
		incrementamos el valor del contador. */
		if ((frase[celda]=='a') || (frase[celda]=='A'))
		{
			contador++;
		}

		/* Aumentamos el numero de la celda. */
		celda++;
	}

	/* Mostramos el numero de caracteres 'a' o 'A' encontrados. */
	printf ("\nSe han encontrado %d 'a' o 'A'.", contador);

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return 0;
}
