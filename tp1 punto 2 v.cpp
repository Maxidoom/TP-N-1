#include<iostream>
using namespace std;

int main()
{
float precio;
float cantidad;
float Ptotal;

cout<<"tienda de programacion"<<endl;
cout<<"	cout $2"<<endl;
cout<<"	variables $4"<<endl;
cout<<"	cin $10"<<endl;
cout<<"Ingrese el precio del articulo que quiera llevar:"<<endl;
cin>>precio;
cout<<"ingrece la cantidad de articulos que quiera llevar:"<<endl;
cin>>cantidad;
Ptotal=precio*cantidad;
cout<<"debe pagar "<<Ptotal;
    return 0;
}
