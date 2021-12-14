#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad=10;
	int num_hermanos=1;
	int *ptr; //Definimos un puntero a entero
	
	cout << "edad se almacena en posición de memoria:  " << &edad << endl;
	cout << "num_hermanos está en posición de memoria: " << &num_hermanos << "\n\n";
	ptr = &edad; //Guardamos la dirección de memoria de la variable edad en el puntero
	cout << "El puntero contiene el valor o 'apunta a la dirección': " << endl;
	cout << ptr << endl;
	
	cout << "La dirección apuntada por el puntero contiene el valor:" << endl;
	cout << *ptr << "\n\n"; //Mostramos el contenido de la variable apuntada por el     puntero
	
	cout << "Usando *ptr podemos modificar el valor de la variable edad: *ptr=12 " << endl;
	*ptr = 12; //Podemos cambiar el contenido de la variable apuntada por el puntero.
	cout << edad << "\n\n"; //Comprobamos que la variable ha cambiado
	
	cout << "Un mismo puntero puede modificarse para que apunte a otra variable: " << endl;
	ptr = &num_hermanos;
	cout << "\tnueva posición de memoria apuntada por ptr: " << ptr << endl;
	cout << "\tvalor almacenado en esa nueva posición *ptr:" << *ptr << endl;
	
	int[] notas[3] = {9, 8.5, 10};
	
	return 0;
}
