#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int **lista;
    lista=new int*[5];
    for(int i=0;i<5;i++)
        lista[i]=new int[5];

    imprimir(lista);
}

