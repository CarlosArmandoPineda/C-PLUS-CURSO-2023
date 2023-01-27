#include <iostream>
#include <string.h>

using namespace std;

int main(int argc, char** argv)
{
	char frase[30];
	int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0;
	
	cout<<"Digite un frase: ";
	cin.getline(frase,30,'\n');
	
	for(int i=0;i<30;i++){
		switch(frase[i]){
			case 'a': vocal_a++; break;
			case 'e': vocal_e++; break;
			case 'i': vocal_i++; break;
			case 'o': vocal_o++; break;
			case 'u': vocal_u++; break;
		}
	}
	
	cout<<"La vocal a: "<<vocal_a<<endl;
	cout<<"La vocal e: "<<vocal_e<<endl;
	cout<<"La vocal i: "<<vocal_i<<endl;
	cout<<"La vocal o: "<<vocal_o<<endl;
	cout<<"La vocal u: "<<vocal_u<<endl;
	return 0;
}

