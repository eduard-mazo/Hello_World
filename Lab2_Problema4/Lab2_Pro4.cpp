#include <iostream>
#include "funciones.h"

using namespace std;


void almacenar(string datos,int *c);
int elevar(int b,int p);


int main()
{
    int c=0;
    string datos;
    getline(cin,datos);
    almacenar(datos,&c);
    cout<<"EL NUMERO INGRESADO ES: "<<c<<endl;
}

