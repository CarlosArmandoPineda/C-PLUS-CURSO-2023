#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	float x, y, funcion = 0;
	
	cout << "Digite x: "; cin >> x;
	cout << "Digite y: "; cin >> y;
	
	funcion = ((sqrt(x)) / (pow(y,2)-1));
	
	cout << "\nEl resultado de la funcion es: " <<funcion<<endl;

	return 0;
}

