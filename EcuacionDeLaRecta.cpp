#include<iostream>
using namespace std;

void eqrecta()
{
	double X1,X2,Y1,Y2;
	cout<<"Ingrese la coordenada en X1 : "<<endl;
	cin>>X1;
	cout<<"Ingrese la coordenada en X2 : "<<endl;
	cin>>X2;
	cout<<"Ingrese la coordenada en Y1 : "<<endl;
	cin>>Y1;
	cout<<"Ingrese la coordenada en Y2 : "<<endl;
	cin>>Y2;
	cout<<endl;
	
	if(X1==X2)
	{
		cout<<"No existe ecuacion lineal para las corrdenadas dadas"<<endl;	
	}
	else
	{
		cout<<"la ecuacion de la recta es : "<<" Y = "<<
		(Y2-Y1)/(X2-X1) <<"X + "<<(-(Y2-Y1)*X1/(X2-X1)+Y1)<<endl;
	}
}


int main(void)
{
	cout<<"Programa para obtener la ecuacion de la recta"<<endl;
	cout<<"Para obtener la ecuacion de la recta, necesitamos de dos coodeandas X y Y"<<endl;
	
	cout<<endl;
	eqrecta();
return 0;	
}
