#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int numeros[100][100], filas, columnas;
	char band = 'F';
	
	cout<<"Digite el numero de filas: ";cin>>filas;
	cout<<"Digite el numero de columnas: ";cin>>columnas;
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"\nDigite un numero ["<<i<<"]["<<j<<"] : ";
			cin>>numeros[i][j];
		}
	}
	
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numeros[i][j] == numeros[j][i]){
					band = 'V';
				}
			}
		}
	}
	
	if(band == 'V'){
		cout<<"\nLa matriz es simetrica.\n";
	}else{
		cout<<"\nLa matriz no es simetrica. \n";
	}
	return 0;
}

