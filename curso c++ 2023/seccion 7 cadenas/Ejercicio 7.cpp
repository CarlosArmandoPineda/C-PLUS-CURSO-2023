#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char palabra1[30];
	char palabra2[30];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra1,30,'\n');
	cout<<"Digite otra palabra: ";
	cin.getline(palabra2,30,'\n');
	
	if(strcmp(palabra1,palabra2) == 0){
		cout<<"Ambas palabras son iguales"<<endl;
	}
	else if(strcmp(palabra1,palabra2)>0){
		cout<<palabra1<<" es mayor alfabeticamente"<<endl;
	}else{
		cout<<palabra2<<" es mayor alfabeticamente"<<endl;
	}
	return 0;
}

