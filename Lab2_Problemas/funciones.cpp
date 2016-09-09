#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;
int b,c=0;
string nombres;

void imprimir(){

    cin >> nombres;
    cout<<endl<<"TAMANO DEL STRING: "<<nombres.length()<<endl;

    for(int i=0;i<(int)nombres.length();i++)
    {
        c=nombres[i]-48;
        b+=c;
    }
    cout<<"SUMA DE CADA UNO DE LOS STRING: "<<b<<endl;
}
