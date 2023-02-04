#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numero,suma=1;
	
	cout<<"Digite un numero: ";cin>>numero;
	
	for(int i=1;i<=numero;i++){
		suma*=i;
	}
	
	cout<<"\nEl factorial de "<<numero<<" es: "<<suma<<endl;
	
	return 0;
}

