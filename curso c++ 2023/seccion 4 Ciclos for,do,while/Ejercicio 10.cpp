#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int nElementos,factorial=1,suma=0;
	
	cout<<"Digite el numero de elementos a sumar: ";
	cin>>nElementos;
	
	for(int i=1;i<=nElementos;i++){
		factorial*=i;
		suma=suma+factorial;
	}
	
	cout<<"\nLa suma de factoriales es: "<<suma<<endl;
	return 0;
}
