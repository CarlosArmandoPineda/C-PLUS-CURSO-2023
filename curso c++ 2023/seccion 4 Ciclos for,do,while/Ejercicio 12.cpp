#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int nElementos,par,sumaPares=0,sumaImpares=0,sumaTotal=0;
	
	cout<<"Digite el numero de elementos a sumar: ";
	cin>>nElementos;
	
	for(int i=0;i<=nElementos;i++){
		if(i%2==0){
			par = i*-1;
			sumaPares+=par;
		}else{
			sumaImpares+=i;
		}
	}
	
	sumaTotal=sumaPares+sumaImpares;
	
	cout<<"\nEl resultado de la suma es: "<<sumaTotal<<endl;
	
	return 0;
}

