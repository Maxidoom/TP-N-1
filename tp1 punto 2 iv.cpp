#include<iostream>
using namespace std;

int main()
{

float num1;
float num2;
float num3;
float num4;
float suma;
float promedio;
cout<<"Este programa va a promediar y sumar 4 numeros"<<endl;
cout<<"Ingrese un numero:"<<endl;
cin>>num1;
cout<<"Otro numero:"<<endl;
cin>>num2;
cout<<"Otro numero:"<<endl;
cin>>num3;
cout<<"El ultimo numero:"<<endl;
cin>>num4;
promedio=(num1+num2+num3+num4)/4;
suma=num1+num2+num3+num4;
cout<<"El promedio es "<<promedio<<" y la suma es "<<suma;
    return 0;
}
