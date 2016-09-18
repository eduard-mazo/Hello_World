#include <iostream>
#include <string>
#include "funciones.h"

using namespace std;

void test()
{cout<<"\tPROGRAMA TEST"<<endl;
    string a="hola";
    string b="hol4";
    int x=0;
    int y=0;
    bool flg=false;
    tamano(a,b,&x,&y);
    flg=compara(a,b,&x,&y);
    if(flg)cout<<"IGUALES"<<endl;
    else cout<<"DIFERENTES"<<endl;
 cout<<"\tFIN PROGRAMA TEST"<<endl;
}

void tamano(string a, string b, int* x, int* y)
{

    while(a[*x]!=0)
    {
        *x=*x+1;
    }
    while(b[*y]!=0)
    {
        *y=*y+1;
    }

}

bool compara(string a,string b,int*x,int*y )
{
    bool out=false;

    if(*x==*y)
    {
        for(int i=0;i<*x;i++)
        {
            if((int)a[i]!=(int)b[i])
            {
                out=true;
            }
        }
        if(!out) return true;
        else return false;
    }
    else return false;
}


