#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int n1,n2,n3;
	
	cout << "Digite 3 numeros: "; cin>>n1>>n2>>n3;
	
	if(n1==n2&&n2==n3)
	{
		cout << "\nLos 3 numeros son iguales."<<endl;
	}
	else if(n1>n2&&n1>n3)
	{
		cout<<"\nEl numero mayor es: "<<n1<<endl;
	}
	if(n2>n1&&n2>n3)
	{
		cout<<"\nEl numero mayor es: "<<n2<<endl;
	}
	if(n3>n1&&n3>n2)
	{
		cout<<"\nEl numero mayor es: "<<n3<<endl;
	}
	
	return 0;
}

