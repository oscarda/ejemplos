#include <iostream>
using namespace std;

float calcula_promedio( float calificaciones[], int num_calificaciones)
{
	float promedio, suma_calificaciones=0;
	int indice=0;
	
	while (indice < num_calificaciones)
	{
		suma_calificaciones += calificaciones[indice];
		indice++;
	}
	
	promedio = suma_calificaciones/num_calificaciones;
	return promedio;
}


int main(int argc, char *argv[]) {
	float nota_media;
	int indice=0, num_examenes=0;
	bool seguir = true;
	char letra = 'a';
	char palabra[10];
	string nombre;
	
		
	cout << "Bienvenido al programa para calcular la media de tus notas\n";
	
	cout << "Introduce tu nombre:\n";
	cin >> nombre;
	cout << "Bienvenido, " << nombre << endl;
	
	do 
	{
		cout << "Introduce el número de exámenes que has hecho (valor positivo):\n";
		cin >> num_examenes;
		if (num_examenes<=0) {
			cout << "Recuerda que el valor debe ser positivo.\n";
		}			
	} while (num_examenes<=0); 
	
	float notas[100];
	for (indice=0; indice<num_examenes; indice++)
	{
		cout << "Introduce la nota del examen " << indice+1 <<":\n";
		cin >> notas[indice];
	}
	
	nota_media = calcula_promedio(notas, num_examenes);
	
	cout << "Tu nota media es " << nota_media << endl;
	
	if (nota_media >= 5)
	{
		cout << "De momento estás aprobado, sigamos trabajando para consolidar.\n";
	}
	else 
	{
		cout << "De momento estás suspenso, intentemos remontar.\n";
	}
	
	cout << "Final del programa. Gracias.\n";
	return 0;
}

