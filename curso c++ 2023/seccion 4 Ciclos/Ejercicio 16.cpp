#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numero;
	
	cout<<"Digite un numero: ";
	cin>>numero;
	
	for(int i=2;numero>1;i++){
		while(numero%i==0){
			cout<<i<<" ";
			numero /= i;
		}
	}
	
	return 0;
}

