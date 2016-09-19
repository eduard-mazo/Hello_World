#include <iostream>
#include "funciones.h"


using namespace std;


short int x,p=0;
int main()
{
    string datos,datos2;
    getline(cin,datos);
    getline(cin,datos2);
    x=elementos(datos);
    p=elementos(datos2);
    int lista[x],lista2[x],lista3[p],lista4[p];

    vectores(lista,lista2,x);
    vectores(lista3,lista4,p);
    almacenar(datos,lista,lista2);
    almacenar(datos2,lista3,lista4);

    imprimir(lista,lista2,lista4);
}

