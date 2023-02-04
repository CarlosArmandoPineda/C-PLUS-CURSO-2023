#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numeros[] ={1,2,3,4,5};
	int multiplicacion = 1;
	
	for(int i=0;i<5;i++){
		multiplicacion *= numeros[i];
	}
	
	cout<<"\nLa multiplicacion de los elementos es: "<<multiplicacion<<endl;
	
	return 0;
}

