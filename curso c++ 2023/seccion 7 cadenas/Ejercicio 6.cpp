#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char palabra1[] = "Hola";
	char palabra2[] = "Hola";
	
	char palabra3[] = "becerro";
	char palabra4[] = "avion";
	
	if(strcmp(palabra1,palabra2) == 0){
		cout<<"Ambas palabras son iguales."<<endl;
	}
	
    if(strcmp(palabra3,palabra4) > 0){
    	cout<<palabra3<<" esta despues alfabeticamente."<<endl;
	}
	
	
	return 0;
}

