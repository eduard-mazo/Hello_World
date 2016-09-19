#include <string>
#include <stdio.h>
#include <iostream>
#include "funciones.h"


using namespace std;
int d,j=0;
int main()
{string romano;
    getline (cin, romano);
    int i;
    while((int)romano[i]!=0)
    {
        if((int)romano[i]!=0)
        {
            i++;
        }
    }

    int lista[i];

    for(j=0;j<i;j++)
    {
        switch ((int)romano[j]) {
        case 77: //M

            lista[j]=1000;

            break;

        case 68: //D

            lista[j]=500;
            break;

        case 67: //C

            lista[j]=100;
            break;

        case 76: //L

            lista[j]=50;
            break;

        case 88: //X

            lista[j]=10;
            break;

        case 86:  //V

            lista[j]=5;
            break;

        case 73:  //I

            lista[j]=1;
            break;
        default:
            d=1;
            break;

        }
    }
    int k=0;
    if(!d)
    {

        for(int j=0;j<i;j++)
        {   if(j+1<=i)
            {
                if(lista[j]>=lista[j+1])k=lista[j]+lista[j+1]+k;
                if(lista[j]<lista[j+1])k=lista[j+1]-lista[j]+k;
                j++;
            }
        }
        cout<<"TOTAL: "<<k<<endl;
    }
    else cout<<"nuemero invalido"<<endl;
}
