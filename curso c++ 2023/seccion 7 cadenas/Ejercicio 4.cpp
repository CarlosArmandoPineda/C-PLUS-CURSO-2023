#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char nombre[] = "Alejandro";
	char nombre2[20];
	
	strcpy(nombre2,nombre);
	
	cout<<nombre2<<endl;
	
	return 0;
}

