#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int a=0;
    int x=0;

    string numero;
    cin>>a;
    cin.ignore();
    getline(cin,numero);
    tamano(numero,&x);
    almacenar(numero,x,a);

}

