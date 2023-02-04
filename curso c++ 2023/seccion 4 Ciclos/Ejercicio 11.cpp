#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	int numero,suma=0,r;
	
	cout<<"Digite un numero: ";cin>>numero;
	cout<<"Digite el numero de repeticiones: ";cin>>r;
	
	for(int i=1;i<=r;i++){
		suma+=pow(numero,i);
	}
	
	cout<<"\nLa suma es: "<<suma<<endl;
	return 0;
}

