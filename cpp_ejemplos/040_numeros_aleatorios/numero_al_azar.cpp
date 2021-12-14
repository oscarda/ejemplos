#include <iostream>	//cout <<
#include <cstdlib>	//srand() y rand()
#include <ctime>	//time()
using namespace std;

int main(int argc, char *argv[]) {
	int i, num_azar;		
	
	/* 	Inicializa el generador de numeros aleatorios, introduciendo como
		parametro una 'semilla' que sera distinta en cada ejecucion*/
	srand( time(NULL) );
	// time(NULL) devuelve el número de segundos desde 1/enero/1970)	
	
	
	/* Muestra 10 numeros aleatorios entre 0 y 5 */
	for( i = 0 ; i < 10 ; i++ ) {
		
		/* 	rand() devuelve un numero aleatorio entre 0 y RAND_MAX.
			El valor de RAND_MAX varia entre disintas implementaciones
			pero se garantiza que al menos es 32767	*/ 
		num_azar = rand() % 6;
		/* 	con % obtenemos el resto de dividir por 6, 
		y por tanto rand() % 6 variara entre 0 y 5 */	

		cout << num_azar << " " ;	

	}
	
	
	return 0;

}

