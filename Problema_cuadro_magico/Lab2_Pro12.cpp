#include <iostream>
#include "funciones.h"
#define clear() cout<<"\033[H\033[J";

using namespace std;

int main()
{

    int dim;
    cout<<"\tCUADRADO MAGICO"<<endl<<endl<<"INGRESE LA DIMENSION DE SU MATRIZ ";
    cin>>dim;
    int **lista;
    lista=new int*[dim];  //filas
    for(int i=0;i<dim;i++)
        lista[i]=new int[dim]; //columnas
    cin.ignore();
    rellenar(lista,dim);
    bool check=false;
    check=revisar(lista,dim);
    imprimir(lista,dim,check);

}
