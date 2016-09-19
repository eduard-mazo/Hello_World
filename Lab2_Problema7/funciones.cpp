#include <iostream>

using namespace std;

void clasificar(string letras,int x)
{
      cout<<endl<<"PALABRA ORIGINAL: "<<letras;
    for(int i=0;i<x;i++)
    {

        for(int j=i;j<x;j++)
        {
            if(((int)letras[i])==((int)letras[j+1]))letras[j+1]=0;
        }
    }
    cout<<endl<<"SIN CARACTERES REPETIDOS: ";
    for(int i=0;i<x;i++)
    {
        if((int)letras[i]!=0)cout<<letras[i]<<" ";
    }
    cout<<endl;

}
void tamano(string a, int* x)
{
    while(a[*x]!=0)
    {
        *x=*x+1;
    }
}
