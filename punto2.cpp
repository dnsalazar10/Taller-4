#include <iostream>
#include <math.h>
#include <fstream>

using namespace std;

int i,j;
double T[max];
double Tf[max];
double Cp,p,K,T, dt,dx

int main(){
	
	Cp=820.; //Calor especifico
	p=2.71.; //Densidad
	K=1.62.; //Conductividad termica
	double v=K/(Cp*p); //Coeficiente de difusion
	T=100.; //Temperatura

	dt=0.7*(C*p*dx*dx)/(2*K);	
	dx=0.03;
	
	
	
	int i;
	
	i=1;

	while(i<=10){
		cout<<"Hello world ";
		cout<<i<<endl;
	  	i++;
}

	for(int i=1; i<=10; i++)
	{
	cout<<"Hello world " <<i<<endl;
	}
	return 0;
}
