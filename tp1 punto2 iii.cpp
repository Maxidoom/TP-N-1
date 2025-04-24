#include<iostream>
using namespace std;

int main()
{
	float n1;
	float n2;
	float n3;
	float n4;
	float suma;
	float mult;
	cout<<"Este programa va a hacer una suma y una multiplicacion"<<endl;
	cout<<"ingrese el primer numero:"<<endl;
	cin>>n1;
	cout<<"ingrese otro:"<<endl;
	cin>>n2;
	cout<<"otro mas:"<<endl;
	cin>>n3;
	cout<<"y el ultimo:"<<endl;
	cin>>n4;
	suma=n1+n2;
	mult=n3*n4;
	cout<<"la suma de los primeros dos numeros es:"<<suma<<endl;
	cout<<"y el producto de los ultimos dos es:"<<mult;
    return 0;
}
