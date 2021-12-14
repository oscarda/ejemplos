#include <iostream>
using namespace std;
#define PI 3.14

int main (void)
{
	int numero = 10;

	/* Mostramos el valor de la variable numero en la pantalla. */
	cout << numero;

	/* Hacemos un salto de linea. */
	cout << '\n';

	/* Mostramos el valor de un caracter en la pantalla. */
	cout << 'K';

	/* Hacemos un salto de linea. */
	cout << '\n';

	/* Mostramos el valor de la constante PI en la pantalla. */
	cout << PI;

	/* Hacemos un salto de linea. */
	cout << '\n';

	/* Mostramos el valor resultante de una expresion en la pantalla. */
	cout << ((3+7)*2);

	/* Hacemos un salto de linea. */
	cout << '\n';

	/* Mostramos una cadena de caracteres en la pantalla. */
	cout << "Hola a todos";

    /* Hacemos una pausa hasta que el usuario pulse Intro */
    cout << "\nPulse Intro para finalizar...";
    cin.get();

    return 0;
}
