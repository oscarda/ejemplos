#include <iostream>
#include <limits>
using namespace std;

int main(int argc, char *argv[]) {
	cout
		<< "type\t\t|lowest()\t\t|min()\t\t\t|max()\n"
		<< "bool\t\t|"
		<< numeric_limits<bool>::lowest() << "\t\t\t|"
		<< numeric_limits<bool>::min() << "\t\t\t|"
		<< numeric_limits<bool>::max() << '\n'
		<< "------------------------------------------------------------------\n"
		<< "uchar\t\t|"
		<< +numeric_limits<unsigned char>::lowest() << "\t\t\t|"
		<< +numeric_limits<unsigned char>::min() << "\t\t\t|"
		<< +numeric_limits<unsigned char>::max() << '\n'
		<< "------------------------------------------------------------------\n"
		<< "int\t\t|"
		<< numeric_limits<int>::lowest() << "\t\t|"
		<< numeric_limits<int>::min() << "\t\t|"
		<< numeric_limits<int>::max() << '\n'
		<< "unsigned int\t|"
		<< numeric_limits<unsigned int>::lowest() << "\t\t\t|"
		<< numeric_limits<unsigned int>::min() << "\t\t\t|"
		<< numeric_limits<unsigned int>::max() << '\n'		
		<< "short\t\t|"
		<< numeric_limits<short>::lowest() << "\t\t\t|"
		<< numeric_limits<short>::min() << "\t\t\t|"
		<< numeric_limits<short>::max() << '\n'		
		<< "long\t\t|"
		<< numeric_limits<long>::lowest() << "\t|"
		<< numeric_limits<long>::min() << "\t|"
		<< numeric_limits<long>::max() << '\n'				
		<< "------------------------------------------------------------------\n"
		<< "float\t\t|"
		<< numeric_limits<float>::lowest() << "\t\t|"
		<< numeric_limits<float>::min() << "\t\t|"
		<< numeric_limits<float>::max() << '\n'
		<< "double\t\t|"
		<< numeric_limits<double>::lowest() << "\t\t|"
		<< numeric_limits<double>::min() << "\t\t|"
		<< numeric_limits<double>::max() << '\n';
	return 0;
}

