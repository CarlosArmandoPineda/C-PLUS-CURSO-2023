#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numeros[5],numeros2[5];
	
	for(int i=0;i<5;i++){
		cout<<i+1<<" .Digite los elementos del arreglo: ";
		cin>>numeros[i];
	}
	
	for(int i=0;i<5;i++){
		numeros2[i]=numeros[i]*2;
	}
	
	cout<<"\nLos elementos del arreglo por 2: ";
	for(int i=0;i<5;i++){
		cout<<numeros2[i]<<" ";
	}
	return 0;
}

