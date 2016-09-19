#include <iostream>
#include "funciones.h"
#define row 6
#define col 8

using namespace std;

int main()
{
    int **lista;
    lista= new int*[row];
    for(int i=0;i<row;i++)
        lista[i]= new int[col];

    rellenar(lista);
    imprimir(lista);
    cout<<endl<<"INGRESE LA POSICION I - J, SEPARADAS UN ESPACIO PARA COMENZAR EL ANALISIS: ";
    buscar(lista);

}

