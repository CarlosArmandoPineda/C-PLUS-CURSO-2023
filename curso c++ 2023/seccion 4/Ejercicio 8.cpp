#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int nElementos, sumaTotal=0;
	
	cout<<"Digite el numero de elementos a sumar: ";
	cin>>nElementos;
	
	for(int i=1;i<=2*nElementos-1;i+=2){
		sumaTotal+=i;
	}
	
	cout<<"\nLa suma es: "<<sumaTotal<<endl;
	
	return 0;
}

