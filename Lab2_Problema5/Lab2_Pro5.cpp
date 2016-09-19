#include <iostream>
#include "funciones.h"

using namespace std;


int main()
{
    int a,b;
    cin>>a;

    tamano(a,&b);
    char nuevo[b];

    almacenar(nuevo,b,a);

    imprimir(nuevo,b);


}
