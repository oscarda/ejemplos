#include <iostream>
using namespace std;

int main()
{
	string nombre, diminutivo, saludo; 	

	cout << "Introduce tu nombre\n";	
	//cin >> nombre;	// lee una palabra como string
	//getline(cin, nombre);	//lee una frase completa
	nombre="Roberto";

	saludo= "Hola " + nombre;	//podemos usar + para concatenar cadenas
	cout << saludo << "\n";	
	
	diminutivo = nombre.substr(0,3);

	cout << "�Qu� tal " << diminutivo << "?\n";
	
	cout << "Esta es la primera letra de tu nombre: " << nombre.at(0) << endl;
	cout << "Y esta es la �ltima letra: " << nombre[nombre.length()-1] << endl;
	
	string mensaje="C++ es un gran lenguaje";
	cout << mensaje.substr(4, mensaje.length()) << endl;
	
	cout << "La subcadena 'gran' se encuentra en la posici�n: " << mensaje.find("gran") << endl;
	mensaje.replace(0, 3, "Cpp");
	cout << mensaje << endl;
	
	cout << mensaje.insert(14, "d�simo") << endl;

	//pasar una cadena a may�sulas
	int i=0;
	for(i=0; i< mensaje.length(); i++)
	{
		mensaje[i]=toupper(mensaje[i]);
	}
	cout << mensaje << endl;
	
	//comparacion de cadenas: < > <= >= == !=
	if (nombre < "Zenaida")
	{
		cout << "En orden alfab�tico '" << nombre <<"' es menor que 'Zenaida'" << endl;
	}
	
	if (nombre == "Luke")
	{
		cout << "��Qu� alegr�a, amo Luke!!" << endl;
	}
	
	
	cin.get();	// espera hasta que presione una tecla
}
