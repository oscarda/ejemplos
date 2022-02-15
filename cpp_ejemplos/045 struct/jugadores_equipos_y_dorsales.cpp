#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	string jugadores[5];
	string equipos[5];
	int dorsales[5];
	int i;
	
	for (i=0;i<3;i++) {
		cout << "Introduce el NOMBRE del jugador " << i << ":\n";		
		cin >> jugadores[i];
		cin.ignore(1);
		
		cout << "Introduce el EQUIPO de " << jugadores[i] << ":\n";
		cin >> equipos[i];		
		cin.ignore(1);
		
		cout << "Introduce el DORSAL de " << jugadores[i] << ":\n";
		cin >> dorsales[i];				
		cin.ignore(1);
	}
	
	cout << "\nLos datos introducidos son: \n";
	for (i=0; i<3; i++) {
		cout << "El jugador " << jugadores[i] 
			 << "\n\tjuega en el equipo " << equipos[i]
			 << "\n\tcon el dorsal " << dorsales[i]
			 << endl;
	}
	return 0;
}

