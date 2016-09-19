#include <iostream>
#include "funciones.h"

using namespace std;

void Buscar()
{
    int a;
    cout<<"INGRESE TAMANO DE LA MATRIZ:  ";
    cin>>a;
    int tabla[a][a];
    cout<<endl;
    for (int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            tabla[i][j]='*';
            cout<<(char)tabla[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    a=a+1;
    fact(&a);
    cout<<"\tLOS CAMINOS POSIBLES PARA TU MATRIZ SON: "<<a<<endl<<endl;

}
void fact(int*c)
{

    int b;
    b=*c;

    for(int i=1;i<b;i++)
    {
        *c*=i;
    }
}
