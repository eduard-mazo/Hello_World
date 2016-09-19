#include <iostream>
#include "funciones.h"
using namespace std;

void tamano(string numero,int*x)
{
    while((int)numero[*x]!=0)
    {
        *x=*x+1;
    }
}
void almacenar(string datos,int x,int a)
{   int c=0;
    if(x%a)c=a-x%a;
    else c=0;
    if(x%a)x=x+c;

    int lista[x];
    int lista2[x];
    int y=0;
    int b=0;
    int m=0;
    for(int i=0;i<x;i++)
    {
        lista[i]=0;
        lista2[i]=0;
    }
    for(int i=c;i<x;i++)
    {
        lista[i]=(datos[i-c]-48);
    }
    while(m<x)
    {   b=a;
        for(int i=m;i<(m+a);i++)
        {
            lista2[y]+=lista[i]*elevar(10,(b-1));
            b--;
        }
        y++;
        m+=a;
    }
    for(int i=0;i<x/a;i++)
    {
        cout<<lista2[i]<<" + ";
        lista2[(x/a)+1]+=lista2[i];
    }
    cout<<"\b\b\b"<<" = "<<lista2[(x/a)+1]<<endl;


}

int elevar(int b,int p)
{int c=1;
    for(int i=0;i<p;i++)
    {
        c*=b;
    }
    return c;
}
