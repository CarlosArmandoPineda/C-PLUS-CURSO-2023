#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numero,contador = 0;
	
	do{
		cout<<"Digite un numero: ";cin>>numero;
		
		if(numero>0){
			contador++;
		}
	}while(numero != 0);
	
	cout<<"\nEl numero de valores mayores a cero introducido es: "<<contador<<endl;
	return 0;
}

