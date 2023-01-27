#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char frase[50];

	cout<<"Digite una frase: ";
	cin.getline(frase,50,'\n');
	
	if(strlen(frase)>10){
		cout<<frase<<endl;
	}else{
		cout<<"La cadena no supera 10 caracteres. "<<endl;
	}
	
	
	return 0;
}

