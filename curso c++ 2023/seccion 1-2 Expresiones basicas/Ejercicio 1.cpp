//1.
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	float a,b, resultado = 0;
	
	cout << "Digite el valor de a: "; cin >> a;
	cout << "Digite el valor de b: "; cin >> b;
	
	resultado = (a/b) + 1;
	
	cout.precision(2);
	cout << "El resultado es: " <<resultado<<endl;
	return 0;
}

