#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numero;
	
	cout <<"Digite un numero: ";cin>>numero;
	
	if(numero==0)
	{
		cout<<"\nEl numero es 0"<<endl;
	}else if(numero > 0){
		cout<<"\nEl numero es positivo"<<endl;
	}else{
		cout<<"\nEl numero es negativo"<<endl;
	}
	return 0;
}

