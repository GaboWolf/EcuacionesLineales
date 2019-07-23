#include <iostream>
using namespace std;
int main()
{
 int opcion,repetir=1;
 float matriz2x3[2][3],matriz3x4[3][4],x,y,z;
 do
 {
 cout<<"Este programa resuleve sistemas ecuaciones, de 2 y 3 incognitas"<<endl;
 cout<<"Para resolver un sistema de 2 incognitas Presiona 1"<<endl;
 cout<<"Para resolver un sistema de 3 incognitas Presiona 2"<<endl;
 cout<<"Presiona la opcion: ";
 cin>>opcion;
 while(opcion<1||opcion>2)
 {
  cout<<endl<<"Selecciona una opcion valida..."<<endl;
  cout<<"Opcion: ";
  cin>>opcion;
 }
 system("cls");
 switch(opcion)
 {
  case 1:
   cout<<"------------Primera Ecuacion---------"<<endl<<endl;
   cout<<"Ingresa el coeficiente de x: ";
   cin>>matriz2x3[0][0];
   cout<<endl;
   cout<<"Ingresa el coeficiente de y: ";
   cin>>matriz2x3[0][1];
   cout<<endl;
   cout<<"Ingresa el valor del termino independiente : ";
   cin>>matriz2x3[0][2];
   cout<<endl;
   cout<<"------------Segunda Ecuacion---------"<<endl<<endl;
   cout<<"Ingresa el coeficiente de x: ";
   cin>>matriz2x3[1][0];
   cout<<endl;
   cout<<"Ingresa el coeficiente de y: ";
   cin>>matriz2x3[1][1];
   cout<<endl;
   cout<<"Ingresa el valor del termino independiente: ";
   cin>>matriz2x3[1][2];
   cout<<endl;
   
   //Sistema de ecuaciones con el metodo de Gauss
   matriz2x3[0][1]=matriz2x3[0][1]/matriz2x3[0][0];
   matriz2x3[0][2]=matriz2x3[0][2]/matriz2x3[0][0];
   matriz2x3[0][0]=matriz2x3[0][0]/matriz2x3[0][0];// Se hace 1
   
   
   matriz2x3[1][1]=((-matriz2x3[1][0])*matriz2x3[0][1])+matriz2x3[1][1];
   matriz2x3[1][2]=((-matriz2x3[1][0])*matriz2x3[0][2])+matriz2x3[1][2];
   matriz2x3[1][0]=((-matriz2x3[1][0])*matriz2x3[0][0])+matriz2x3[1][0];// Se hace 0
   
   
   matriz2x3[1][2]=matriz2x3[1][2]/matriz2x3[1][1];//variable Y
   matriz2x3[1][1]=matriz2x3[1][1]/matriz2x3[1][1];
   
   
   matriz2x3[0][2]=((-matriz2x3[0][1])*matriz2x3[1][2])+matriz2x3[0][2];//variable X
   matriz2x3[0][1]=((-matriz2x3[0][1])*matriz2x3[1][1])+matriz2x3[0][1];
  
  
   x=matriz2x3[0][2];
   y=matriz2x3[1][2];
   cout<<"Solucion: "<<endl;
   cout<<"\tx ="<<x<<endl;
   cout<<"\ty ="<<y<<endl;
   break;
  case 2:
   cout<<"-------------Primera Ecuacion-----------"<<endl<<endl;
   cout<<"Ingresa el coeficiente de x: ";
   cin>>matriz3x4[0][0];
   cout<<endl;
   cout<<"Ingresa el coeficiente de y: ";
   cin>>matriz3x4[0][1];
   cout<<endl;
   cout<<"Ingresa el coeficiente de z: ";
   cin>>matriz3x4[0][2];
   cout<<endl;
   cout<<"Ingresa el valor del termino independiente: ";
   cin>>matriz3x4[0][3];
   cout<<endl;
   cout<<"-------------Segunda Ecuacion------------"<<endl<<endl;
   cout<<"Ingresa el coeficiente de x: ";
   cin>>matriz3x4[1][0];
   cout<<endl;
   cout<<"Ingresa el coeficiente de y: ";
   cin>>matriz3x4[1][1];
   cout<<endl;
   cout<<"Ingresa el coeficiente de z: ";
   cin>>matriz3x4[1][2];
   cout<<endl;
   cout<<"Ingresa el valor del termino independiente: ";
   cin>>matriz3x4[1][3];
   cout<<endl;
   cout<<"-------------Tercera Ecuacion-------------"<<endl<<endl;
   cout<<"Ingresa el coeficiente de x: ";
   cin>>matriz3x4[2][0];
   cout<<endl;
   cout<<"Ingresa el coeficiente de y: ";
   cin>>matriz3x4[2][1];
   cout<<endl;
   cout<<"Ingresa el coeficiente de z: ";
   cin>>matriz3x4[2][2];
   cout<<endl;
   cout<<"Ingresa el valor del termino independiente: ";
   cin>>matriz3x4[2][3];
   cout<<endl;
   
  //Sistema de ecuaciones con el metodo de Gauss
   matriz3x4[0][1]=matriz3x4[0][1]/matriz3x4[0][0];
   matriz3x4[0][2]=matriz3x4[0][2]/matriz3x4[0][0];
   matriz3x4[0][3]=matriz3x4[0][3]/matriz3x4[0][0];
   matriz3x4[0][0]=matriz3x4[0][0]/matriz3x4[0][0];// Se hace 1
   
   
   matriz3x4[1][1]=((-matriz3x4[1][0])*matriz3x4[0][1])+matriz3x4[1][1];
   matriz3x4[1][2]=((-matriz3x4[1][0])*matriz3x4[0][2])+matriz3x4[1][2];
   matriz3x4[1][3]=((-matriz3x4[1][0])*matriz3x4[0][3])+matriz3x4[1][3];
   matriz3x4[1][0]=((-matriz3x4[1][0])*matriz3x4[0][0])+matriz3x4[1][0];// Se hace 0
   matriz3x4[2][1]=((-matriz3x4[2][0])*matriz3x4[0][1])+matriz3x4[2][1];
   matriz3x4[2][2]=((-matriz3x4[2][0])*matriz3x4[0][2])+matriz3x4[2][2];
   matriz3x4[2][3]=((-matriz3x4[2][0])*matriz3x4[0][3])+matriz3x4[2][3];
   matriz3x4[2][0]=((-matriz3x4[2][0])*matriz3x4[0][0])+matriz3x4[2][0];// Se hace 0
   
   
   matriz3x4[1][2]=matriz3x4[1][2]/matriz3x4[1][1];
   matriz3x4[1][3]=matriz3x4[1][3]/matriz3x4[1][1];
   matriz3x4[1][1]=matriz3x4[1][1]/matriz3x4[1][1];// Se hace 1
   
   
   matriz3x4[0][2]=((-matriz3x4[0][1])*matriz3x4[1][2])+matriz3x4[0][2];
   matriz3x4[0][3]=((-matriz3x4[0][1])*matriz3x4[1][3])+matriz3x4[0][3];
   matriz3x4[0][1]=((-matriz3x4[0][1])*matriz3x4[1][1])+matriz3x4[0][1];// Se hace 0
   matriz3x4[2][2]=((-matriz3x4[2][1])*matriz3x4[1][2])+matriz3x4[2][2];
   matriz3x4[2][3]=((-matriz3x4[2][1])*matriz3x4[1][3])+matriz3x4[2][3];
   matriz3x4[2][1]=((-matriz3x4[2][1])*matriz3x4[1][1])+matriz3x4[2][1];// Se hace 0
   
   
   matriz3x4[2][3]=matriz3x4[2][3]/matriz3x4[2][2];//variable z
   matriz3x4[2][2]=matriz3x4[2][2]/matriz3x4[2][2];
   //-------------------------------------------------------------------
   matriz3x4[0][3]=((-matriz3x4[0][2])*matriz3x4[2][3])+matriz3x4[0][3];//variable x
   matriz3x4[0][2]=((-matriz3x4[0][2])*matriz3x4[2][2])+matriz3x4[0][2];
   matriz3x4[1][3]=((-matriz3x4[1][2])*matriz3x4[2][3])+matriz3x4[1][3];//variable y
   matriz3x4[1][2]=((-matriz3x4[1][2])*matriz3x4[2][2])+matriz3x4[1][2];
   //-------------------------------------------------------------------
   x=matriz3x4[0][3];
   y=matriz3x4[1][3];
   z=matriz3x4[2][3];
   cout<<"Solucion: "<<endl;
   cout<<"\tx ="<<x<<endl;
   cout<<"\ty ="<<y<<endl;
   cout<<"\tz ="<<z<<endl;
   break;
 }
 cout<<"Para realizar otro calculo presiona 1, y para salir presiona 0"<<endl;
 cout<<"Opcion: ";
 cin>>repetir;
 while (repetir<0||repetir>1)
 {
  cout<<endl<<"Ingresa una opcion valida"<<endl;
  cout<<"Opcion: ";
  cin>>repetir;
 }
 system("cls");
 }while(repetir==1);
}
