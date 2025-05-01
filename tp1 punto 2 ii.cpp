#include<iostream>
using namespace std;

int main()
{
float base;//ingresa la variable del la base del triangulo para numeros con coma
float altura;//ingresa la variable de la altura del triangulo
float area;//ingresa la variable del area del triangulo

cout<<"esto va a calcular el area de un triangulo"<<endl;//le indica al usuario que va a hacer programa
cout<<"ingrese la base del triangulo"<<endl;//le pide al usuario que ingrese el valor de la base
cin>>base;//guarda el valor que ingreso el usuario
cout<<"ingrese la altura del triangulo"<<endl;//le pide al usuario que ingrese la altura del triangulo
cin>>altura;//guarda el valor del usuario
area=(base*altura)/2;//indica a que es igual el area
cout<<"el area del triangulo es "<<area;//indica a que es igual el area
    return 0;
}
