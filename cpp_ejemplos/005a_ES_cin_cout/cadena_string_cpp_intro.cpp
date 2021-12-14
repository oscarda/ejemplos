#include <iostream>
using namespace std;

int main()
{
	string nombre, diminutivo; 	

	cout << "Introduce tu nombre\n";	
	cin >> nombre;	// lee una palabra como string
	//getline(cin, nombre);	//lee una frase completa

	cout << "Hola, " << nombre << "\n";
	
	diminutivo = nombre.substr(0,3);

	cout << "¿Qué tal " << diminutivo << "?\n";
	
	cin.get();	// espera hasta que presione una tecla
}
