#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char palabra[20];
	char palabra2[20];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra,20,'\n');
	
	strcpy(palabra2,palabra);
	
	strrev(palabra2);
	
	if(strcmp(palabra,palabra2)==0){
		cout<<palabra<<" es un polindromo"<<endl;
	}else{
		cout<<palabra<< " no es un polindromo"<<endl;
	}
	return 0;
}

