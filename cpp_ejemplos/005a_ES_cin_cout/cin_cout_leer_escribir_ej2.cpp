#include <iostream>
using namespace std;

int main (void)
{
	int num_A, num_B;

	/* Pedimos al usuario que escriba el numero A. */
	cout << "Escriba un numero: ";
	/* Almacenamos el numero en la variable num_A. */
	cin >> num_A;
	/* Pedimos al usuario que escriba el numero B. */
	cout << "Escriba otro numero: ";
	/* Almacenamos el numero en la variable num_B. */
	cin >> num_B;
	/* Mostramos el resultado de sumar los dos numeros. */
	cout << "\n" << num_A << " + " << num_B << " = " << (num_A + num_B);

    /* Hacemos una pausa hasta que el usuario pulse Intro */
    cout << "\nPulse Intro para finalizar...";
    cin.ignore(1);	
	cin.get();

    return 0;
}
