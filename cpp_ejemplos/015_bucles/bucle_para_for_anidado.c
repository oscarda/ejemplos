#include <stdio.h>
//#include <conio.h>

int main (void)
{
	int numero, n, resultado;

	for (numero=1; numero<=10; numero++)
	{
		printf ("\nTabla de multiplicar del %d:", numero);

		for (n=1; n<=10; n++)
		{
			resultado = n * numero;
			printf ("\n\t%d x %d = %d", n, numero, resultado);
		}

		printf ("\nPulse una tecla para continuar...");
		getch();
	}

    return 0;
}
