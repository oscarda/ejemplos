#include <string.h>
#include <stdio.h>

int main(void)
{
	char palabras[250];
	char *p;

	/* Solicitamos al usuario una serie de palabras separadas
	por comas y que se almacenaran en la cadena 'palabras' */
	printf("Escribe varias palabras separadas por comas: ");
	scanf("%s", palabras);

	/* Obtenemos un puntero al primer fragemento de la
	cadena 'palabras' que contiene el caracter coma. Si el
	puntero es distinto de NULL, muestra la primera
	palabra en pantalla */
	p = strtok(palabras, ",");
	if (p)
	{
		printf("\n%s", p);
	}

	/* Mientras encontremos mas fragmentos con coma en
	la misma cadena, continuamos mostrandolos */
	while (p = strtok(NULL, ","))
	{
		printf("\n%s", p);
	}

	/* Hacemos una pausa hasta que el usuario pulse Intro */
	fflush(stdin);
	printf("\n\nPulse Intro para finalizar...");
	getchar();

	return 0;
}

