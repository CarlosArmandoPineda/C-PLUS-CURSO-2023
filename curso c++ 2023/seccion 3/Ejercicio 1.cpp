#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	float n1,n2;
	
	cout << "Digite dos numeros: "; cin>>n1>>n2;
	
	if( n1 == n2)
	{
		cout <<"\nAmbos numeros son iguales"<<endl;
	}
	else
	{
		if ( n1 > n2)
		{
			cout <<"\n"<<n1<<" es mayor a "<<n2<<endl;
		}
		else
		{
			cout <<"\n"<<n2<<" es mayor a "<<n1<<endl;
		}	
	}
	
	return 0;
}

