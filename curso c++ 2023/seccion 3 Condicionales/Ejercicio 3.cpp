#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numero;
	
	cout <<"Digite un numero: "; cin>>numero;
	
     if(numero%2==0){
     	cout <<"\nEl numero es par."<<endl;
	 }else
	 {
	 	cout<<"\nEl numero no es par."<<endl;
	 }
	return 0;
}

