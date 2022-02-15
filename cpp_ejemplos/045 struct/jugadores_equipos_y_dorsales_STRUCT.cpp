#include <iostream>
using namespace std;

//Definimos una estructura de datos: jugador.
struct jugador {
	string nombre;
	string equipo;
	int dorsal;
};

int main(int argc, char *argv[]) {
	jugador jugadores[5];
	int i;
	
	for (i=0;i<2;i++) {
		cout << "Introduce el NOMBRE del jugador " << i << ":\n";		
		cin >> jugadores[i].nombre;
		cin.ignore(1);
		
		cout << "Introduce el EQUIPO de " << jugadores[i].nombre << ":\n";		
		cin >> jugadores[i].equipo;		
		cin.ignore(1);
		
		cout << "Introduce el DORSAL de " << jugadores[i].nombre << ":\n";
		cin >> jugadores[i].dorsal;				
		cin.ignore(1);		
	}
	
	cout << "\nLos datos introducidos son: \n";
	for (i=0; i<2; i++) {
		cout << "El jugador " << jugadores[i].nombre 
			 << "\n\tjuega en el equipo " << jugadores[i].equipo
			 << "\n\tcon el dorsal " << jugadores[i].dorsal
			 << endl;
	}
	return 0;
}

