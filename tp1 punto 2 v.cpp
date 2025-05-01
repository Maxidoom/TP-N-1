#include<iostream>
using namespace std;

int main()
{
float precio;//ingresa la vaiable del precio
float cantidad;//ingresa la vaiable de la cantidad
float Ptotal;//ingresa la vaiable del precio total

cout<<"tienda de programacion"<<endl;//le indica al usuario donde esta
cout<<"	cout $2"<<endl;//le indica al usuario el precio del articulo
cout<<"	variables $4"<<endl;//le indica al usuario el precio del articulo
cout<<"	cin $5"<<endl;//le indica al usuario el precio del articulo
cout<<"Ingrese el precio del articulo que quiera llevar:"<<endl;//le pide al usuario que ingrese el precio del articulo que quiera llevar
cin>>precio;//guarda el presio
cout<<"ingrece la cantidad de articulos que quiera llevar:"<<endl;//le pide al usuario que ingrese la cantidad de articulos que quiera llevar
cin>>cantidad;//guarda la cantidad
Ptotal=precio*cantidad;//indica a que es igual la variable Ptotal(precio total)
cout<<"debe pagar "<<Ptotal;//le indica al usuario cual es el precio total que debe pagar
    return 0;
}
