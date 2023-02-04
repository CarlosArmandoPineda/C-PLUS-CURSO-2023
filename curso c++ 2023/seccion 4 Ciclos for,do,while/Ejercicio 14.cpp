#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	int nota=0,alumnos=5,examen1=0,examen2=0,examen3=0,contador=1;
	int a=0,b=0,c=0;
	for(int i=1;i<=alumnos;i++){
		
		cout<<"alumno# "<<contador++<<endl;
		cout<<"Ingrese la nota del examen 1: ";cin>>examen1;
		cout<<"Ingrese la nota del examen 2: ";cin>>examen2;
		cout<<"Ingrese la nota del examen 3: ";cin>>examen3;
		
		if(examen1 >=70 && examen2 >=70 && examen3>= 70){
			a++;
		} 
		if(examen1 >=70 || examen2 >=70 || examen3>= 70){
			b++;
		}
		if(examen1<70 && examen2<70 && examen3>=70){
			c++;
		}
		
	}
	
	cout<<"\nAlumnos que aprobaron todos los examenes: "<<a<<endl;
	cout<<"Alumnos que aprobaron al menos un examen: "<<b<<endl;
	cout<<"Alumnos que aprobaron unicamente el ultimo examen: "<<c<<endl;
	return 0;
}

