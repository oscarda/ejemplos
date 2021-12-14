#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int edad = 10;
	int &ref_edad=edad;
	ref_edad=15;
	cout << edad;
	
	return 0;
}
