#include <iostream>
#include "funciones.h"

using namespace std;

void almacenar(string datos,int *c)
{
    int a=0;
    int b=0;

    while((int)datos[b]!=0)
    {
        b++;
    }

    while((int)datos[a]!=0)
    {
        *c+=(datos[a]-48)*elevar(10,(b-1));
        b--;
        a++;
    }
}

int elevar(int b,int p)
{int c=1;
    for(int i=0;i<p;i++)
    {
        c*=b;
    }
    return c;
}
