#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numeros[100], n,mayor=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<i+1<<". Digite un numero: ";
		cin>>numeros[i];
		
		if(numeros[i] > mayor){
			mayor=numeros[i];
		}
	}
	
	cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl;
	return 0;
}

