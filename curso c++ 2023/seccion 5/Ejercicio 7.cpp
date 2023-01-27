#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	char letras1[] = {'a','b','c','d','e'};
	char letras2[] = {'f','g','h','i','j'};
	char letras3[100];
	
	for(int i=0;i<5;i++){
		letras3[i]=letras1[i];
	} 
	
	for(int i=5;i<10;i++){
		letras3[i]=letras2[i-5];
	}
	
	for(int i=0;i<10;i++){
		cout<<letras3[i];
	}
	return 0;
}

