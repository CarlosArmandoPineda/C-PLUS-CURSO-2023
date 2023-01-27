#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char** argv)
{
	int numero,cubo,opc=0;
	
	cout<<"\tMenu"<<endl;
	cout<<"1.Cubo de un numero"<<endl;
	cout<<"2.Numero par o impar"<<endl;
	cout<<"3.Salir"<<endl;
	cout<<"Ingrese una opcion: ";cin>>opc;
	
	switch(opc){
		case 1:
			{
				cout<<"\nIngrese un numero: ";cin>>cubo;
				cubo = pow(cubo,3);
				cout<<"\nEl cubo del numero es: "<<cubo<<endl;
				break;
			}
		case 2:
			{
				cout<<"\nIngrese un numero: ";cin>>numero;
				if(numero%2==0)
				{
					cout <<"\nNumero es par"<<endl;
				}else{
					cout <<"\nNumero es impar"<<endl;
				}
				break;
			}
		case 3:
			break;
			
	}
	
	return 0;
}

