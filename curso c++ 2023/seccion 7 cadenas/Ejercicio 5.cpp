#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char frase[20];
	char frase2[20];
	
	cout<<"Digite su nombre: ";
	cin.getline(frase,20,'\n');
	
	strcpy(frase2,frase);
	
	cout<<"\n";
	cout<<frase2<<endl;
	
	return 0;
}

