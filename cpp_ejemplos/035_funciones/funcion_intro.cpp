#include <iostream>
using namespace std;

int calcularMaximo(int num1,int num2);
void bienvenida(void);
void duplicar(int &num);
void triplicar(int *num);

int main(int argc, char *argv[]) {
	int numero1,numero2,num_maximo;
	
	bienvenida();
	
	cout << "Dime el número1:";
	cin >> numero1;
	cout << "Dime el número2:";
	cin >> numero2;
	num_maximo = calcularMaximo(numero1,numero2);
	cout << "El máximo es " << num_maximo << "\n\n";
	
	duplicar(numero1);
	num_maximo = calcularMaximo(numero1,numero2);
	cout << "El nuevo máximo es " << num_maximo << "\n\n";

	triplicar(&numero2);
	num_maximo = calcularMaximo(numero1,numero2);
	cout << "El máximo final es " << num_maximo << "\n\n";	
	return 0;
}

//función sin parámetros y sin valor de retorno
void bienvenida(void) 
{
	cout << "Bienvenido al programa calcula máximo.\n\n";
	
}

//función con parametros de entrada por valor, y con valor de retorno
//si la función modifica los parámetros de entrada suminustrados,
//el cambio NO AFECTA a las variables de la función principal
int calcularMaximo(int num1,int num2)
{
	cout << "\t(Calculando el maximo...)\n";
	if(num1>num2)
		return num1;
	else
		return num2;
}

//función con "parametro de entrada por referencia" utilizando 'referencias' de C++
//ahora la modificación del valor de entrada SI AFECTA a la variable de la función principal
void duplicar(int &num)
{
	cout << "\t(Duplicando...)\n";	
	num*=2;
}

//función con "parametro de entrada por referencia" utlizando un puntero tipo C
void triplicar(int *num)	// el parámetro de entrada es de tipo 'puntero a int'
{
	cout << "\t(Triplicando...)\n";	
	//recuerda que para leer o modificar la variabla a la que apunta un puntero
	//utlizamos el operador * -> (*punterp)
	//importante distinguirlo del uso de * como operador de multiplicación
	(*num) =3*(*num);
}
