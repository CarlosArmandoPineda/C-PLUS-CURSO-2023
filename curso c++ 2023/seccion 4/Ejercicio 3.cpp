#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int suma=0,cuadrado;
	
	for(int i=1;i<=10;i++){
		cuadrado=i*i;
		suma+=cuadrado;
	}
	
	cout<<"El resultado de la suma es: "<<suma<<endl;
	return 0;
}

