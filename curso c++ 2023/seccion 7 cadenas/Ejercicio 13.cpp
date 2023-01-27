#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char palabra1[20],palabra2[20];
	
	cout<<"Digite una palabra: ";
	cin.getline(palabra1,20,'\n');
	cout<<"Digite otra palabra: ";
	cin.getline(palabra2,20,'\n');
	
	strupr(palabra1);
	strupr(palabra2);
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas palabras son iguales"<<endl;
	}else{
		cout<<"Las palabras son diferentes"<<endl;
	}
	return 0;
}

