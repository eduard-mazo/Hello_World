#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;


bool flg=false;
int x=0;
int y=0;
string a,b;

int main()
{
test();

    getline(cin,a);
    getline(cin,b);

    tamano(a,b,&x,&y);
    flg=compara(a,b,&x,&y);
    if(flg)cout<<"IGUALES"<<endl;
    else cout<<"DIFERENTES"<<endl;

}

