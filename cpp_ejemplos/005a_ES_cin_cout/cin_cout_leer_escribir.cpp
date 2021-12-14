#include <iostream>
using namespace std;

int main (void)
{
	int numero;

	/* Pedimos al usuario que escriba un mensaje. */
	cout << "Escriba un numero: ";
	/* El numero que escriba el usuario lo almacenamos en la
	variable numero. */
	cin >> numero;
	/* Mostramos un mensaje indicando cual es su doble. */
	cout << "\nEl doble de " << numero << " es " << (numero*2);

	cin.ignore(1);	//ignora el salto de línea del flujo de entrada cin
	cin.get();	// espera hasta que presione una tecla
	
    return 0;
}
