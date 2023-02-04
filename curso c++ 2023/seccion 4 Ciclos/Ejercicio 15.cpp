#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(int argc, char** argv)
{
	int dato, numero, contador=0;
	
	srand(time(NULL));
	dato = 1 + rand() % (100);
	
	do{
	
		cout<<"Digite un numero: ";cin>>numero;
		
		if(numero > dato){
			cout<<"\nDigite un numero menor.\n";
		}
		if(numero < dato){
			cout<<"\nDigite un numero mayor.\n";
		}
			
		contador++;
	}while(numero != dato);
	
	cout<<"\nFelicidades Adivinaste\n";
	cout<<"Numero de intentos: "<<contador;
	
	return 0;
}

