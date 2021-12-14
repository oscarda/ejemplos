#include <iostream>
using namespace std;

int calcularMaximo(int num1,int num2);
void bienvenida(void);

int main(int argc, char *argv[]) {
	int numero1,numero2,num_maximo;
	
	bienvenida();
	
	cout << "Dime el número1:";
	cin >> numero1;
	cout << "Dime el número2:";
	cin >> numero2;
	num_maximo = calcularMaximo(numero1,numero2);
	cout << "El máximo es " << num_maximo;
	return 0;
}

void bienvenida(void) 
{
	cout << "Bienvenido al programa calcula máximo.\n\n";
	
}

int calcularMaximo(int num1,int num2)
{
	if(num1>num2)
		return num1;
	else
		return num2;
}
