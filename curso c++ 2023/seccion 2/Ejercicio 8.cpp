#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	float cateto1, cateto2, hipotenusa;
	
	cout << "Digite el cateto1: "; cin >> cateto1;
	cout << "Digite el cateto2: "; cin >> cateto2;
	
	hipotenusa =  sqrt((pow(cateto1,2))+(pow(cateto2,2)));
	
	cout.precision(2);
	cout << "\nLa hipotenusa del triangulo es: " <<hipotenusa <<endl;
	
	return 0;
}

