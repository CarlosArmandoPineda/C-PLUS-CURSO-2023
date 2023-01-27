#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char nombre[20];
	
	cout<<"Digite su nombre: ";
	cin.getline(nombre,20,'\n');
	
	if(strncmp(nombre,"A",1)==0){
		strlwr(nombre);
		cout<<nombre<<endl;
	}else{
		cout<<"El nombre no comienza con la letra A";		
	}
	
	return 0;
}

