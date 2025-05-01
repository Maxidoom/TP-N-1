#include<iostream>
using namespace std;

int main()
{

float num1;//ingresa la vaiable del primer numero
float num2;//ingresa la vaiable del segundo numero
float num3;//ingresa la vaiable del tercer numero
float num4;//ingresa la vaiable del cuarto numero
float suma;//ingresa la vaiable de la suma
float promedio;//ingresa la vaiable del promedio
cout<<"Este programa va a promediar y sumar 4 numeros"<<endl;//le indica al usuario que va a hacer el programa
cout<<"Ingrese un numero:"<<endl;//le pide al usuario que ingrese un numero
cin>>num1;//guarda el primer numero
cout<<"Otro numero:"<<endl;//le pide al usuario que ingrese otro numero
cin>>num2;//guarda el segundo numero
cout<<"Otro numero:"<<endl;//le pide al usuario que ingrese otro numero
cin>>num3;//guarda el tercer numero
cout<<"El ultimo numero:"<<endl;//le pide al usuario que ingrese otro numero
cin>>num4;//guarda el cuarto numero
promedio=(num1+num2+num3+num4)/4;//indica a que es igual la variable promedio
suma=num1+num2+num3+num4;//indica a que es igual la variable suma
cout<<"El promedio es "<<promedio<<" y la suma es "<<suma;//muestra el resultado del promedio y de la suma
    return 0;
}
