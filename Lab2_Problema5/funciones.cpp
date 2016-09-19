#include <iostream>
#include "funciones.h"

using namespace std;

void tamano(int a,int*b)
{
    *b=0;
    while(a!=0)
    {
        a/=10;
        *b=*b+1;
    }
    cout<<"NUMERO DE CIFRAS: "<<*b<<endl;

}

void almacenar(char* nuevo, int b, int c)
{
    int d,a;
    d=b;
    for(int i=0;i<d;i++)
    {
        a=elevar(10,b-1);
        nuevo[i]=c/a;
        c=c%a;
        b--;
    }
}

void imprimir(char* nuevo,int d)
{
    for(int i=0;i<d;i++)
    {
        cout<<(int)nuevo[i]<<" ";
    }

    cout<<endl;
}


int elevar(int b,int p)
{
    int c=1;
    for(int i=0;i<p;i++)
    {
        c*=b;
    }
    return c;
}
