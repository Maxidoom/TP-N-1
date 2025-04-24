#include<iostream>
using namespace std;

int main()
{
    cout<<"ingrese un numero entero";//le pido al usuario que ingrese un numero entero
    int num1;//ingresa variable de número entero
    cin>>num1;//guarda el número que ingrese el usuario
    cout<<"otro numero";//le pide que ingrese otro numero
    int num2;//ingresa la segunda variable
    cin>>num2;//guarda el segundo numero
    int suma, producto;//ingresa el nombre de los resultados
    suma=num1+num2;//dice que la variable suma es igual a la suma de los dos numeros
    producto=num1*num2;//dice que la variable producto es igual a la multiplicacion de los dos numeros
    cout<<"el resultado de la suma es:"<<suma<<endl;//ingresa el resultado de la suma de los numeros
	cout<<"el resultado del producto es:"<<producto;//ingresa el resultado de la multiplicacion de los dos numeros
    return 0;
}
