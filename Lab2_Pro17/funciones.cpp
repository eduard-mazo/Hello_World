#include <iostream>
#include "funciones.h"

using namespace std;

void sumatoria()
{
    int n; //Entrada
    cout << "INTRODUZCA UN NUMERO:" << endl;
    cin >> n;
    int a=0;
    int b=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            divisores(i,&a);
            divisores(j,&b);
            if(a==j&&b==i)
            {
                if(j==i)  cout<<"NUMERO: "<<i<<" ES PERFECTO"<<endl<<endl;
                else  cout<<"LOS NUMERO: ("<<i<<" , "<<j<<") SON AMIGABLES "<<endl<<endl;
            }
        }
    }


}

void divisores(int n,int* s)
{
    *s=1; // 1 es divisor siempre

    for (int i=2;i<=n/2;i++) {// n/2 es para no tener en cuenta el valor N en la suma.
        if (n%i==0) {
            *s=*s+i;
        }
    }

}
