#include<iostream>
using namespace std;

int main()
{
	float n1;//ingresa la vaiable del primer numero
	float n2;//ingresa la vaiable del segundo numero
	float n3;//ingresa la vaiable del tercer numero
	float n4;//ingresa la vaiable del cuarto numero
	float suma;//ingresa la vaiable de la suma
	float mult;//ingresa la vaiable de la multiplicacion
	cout<<"Este programa va a hacer una suma y despues una multiplicacion"<<endl;//le indica al usuario que va a hacer el programa
	cout<<"ingrese el primer numero para sumar:"<<endl;//le pide al usuario que ingrese un numero para sumar
	cin>>n1;//guarda el primer numero
	cout<<"ingrese otro:"<<endl;//le pide al usuario que ingrese otro numero
	cin>>n2;//guarda el segundo numero
	cout<<"ahora ingrese un numero para multiplicar:"<<endl;//le pide al usuario que ingrese un numero para muktiplicar
	cin>>n3;//guarda el tercer numero
	cout<<"ingrese otro:"<<endl;//le pide al usuario que ingrese otro numero
	cin>>n4;//guarda el cuarto numero
	suma=n1+n2;//indica a que es igual la variable suma
	mult=n3*n4;//indica a que es igual la variable multiplicacion
	cout<<"la suma de los primeros dos numeros es:"<<suma<<endl;//muestra la suma de los primeros dos numeros
	cout<<"y el producto de los ultimos dos es:"<<mult;//muestra el rpoducto de los ultimos dos numeros
    return 0;
}
