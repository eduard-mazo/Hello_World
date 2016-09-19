#include <iostream>

using namespace std;

void separar()
{
    int b=0;
    int i=0;
    int c=0;
    int d=0;
    string letras;
    getline(cin,letras);
    while(letras[b]!=0)
    {
        b++;
    }

    int numeros[b],letras2[b];
    while(letras[i]!=0)
    {
        if(((int)letras[i]>96 && (int)letras[i]<123)||((int)letras[i]>64 && (int)letras[i]<91))
        {
            letras2[c]=(int)letras[i];
            c++;
        }
        if((int)letras[i]>47 && (int)letras[i]<58)
        {
            numeros[d]=(int)letras[i];
            d++;
        }
        i++;
    }
    cout<<endl<<"LETRAS: ";
    for(int i=0;i<c;i++)
    {
        cout<<(char)letras2[i]<<" ";

    }
    cout<<endl<<"NUMEROS: ";
    for(int i=0;i<d;i++)
    {
        cout<<(char)numeros[i]<<" ";

    }
    cout<<endl;

}
