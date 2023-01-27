#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char cad[] = "Hola que tal ";
	char cad2[20];
	
	cout<<"Digite su nombre: ";
	cin.getline(cad2,20,'\n');
	
	strcat(cad,cad2);
	
	cout<<cad<<endl;
	 
	return 0;
}

