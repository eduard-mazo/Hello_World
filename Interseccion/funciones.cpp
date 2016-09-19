#include <iostream>
#include "funciones.h"


using namespace std;
 bool flg=true;
 bool flg2=false;
 bool flg3=true;

void imprimir(int*lista,int*lista2,int*lista4)
{

    int salida[2],salida2[2];
    vectores(salida,salida2,2);
    int mat[lista2[0]+lista2[2]][lista2[1]+lista2[3]],mat2[lista4[0]+lista4[2]][lista4[1]+lista4[3]];

    cout<<endl<<"\tPRIMER CUADRADO"<<endl<<endl;
    for(int i=lista2[1];i<lista2[3]+lista2[1];i++)
    {
        for(int j=lista2[0];j<lista2[2]+lista2[0];j++)
        {
            mat[j][i]='*';
            cout<<" "<<(char)mat[j][i];
        }
        cout<<endl;
    }
    cout<<endl<<"\tSEGUNDO CUADRADO"<<endl<<endl;
    for(int i=lista4[1];i<lista4[3]+lista4[1];i++)
    {
        for(int j=lista4[0];j<lista4[2]+lista4[0];j++)
        {
            mat2[j][i]='*';
            cout<<" "<<(char)mat2[j][i];
        }
        cout<<endl;
    }
    cout<<endl;


    if((lista2[0]+lista2[2])>=(lista4[0]+lista4[2]))
        lista[0]=lista2[0]+lista2[2];

    else lista[0]=lista4[0]+lista4[2];

    if((lista2[1]+lista2[3])>=(lista4[1]+lista4[3]))
        lista[1]=lista2[1]+lista2[3];

    else lista[1]=lista4[1]+lista4[3];




    int vacia[lista[0]][lista[1]];
    for(int i=0;i<lista[1];i++)
    {
        for(int j=0;j<lista[0];j++)
        {
            vacia[j][i]=' ';
        }
    }

    for(int i=lista2[1];i<lista2[3]+lista2[1];i++)
    {
        for(int j=lista2[0];j<lista2[2]+lista2[0];j++)
        {
            vacia[j][i]='*';
        }

    }

    for(int i=lista4[1];i<lista4[3]+lista4[1];i++)
    {
        for(int j=lista4[0];j<lista4[2]+lista4[0];j++)
        {
            if((int)vacia[j][i]==42)vacia[j][i]='+';
            else vacia[j][i]='*';

        }

    }
    cout<<endl<<"\tINTERSECCION"<<endl<<endl;

    for(int i=0;i<lista[1];i++)
    {
        for(int j=0;j<lista[0];j++)
        {
            cout<<(char)vacia[j][i]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<lista[1];i++)
    {
        for(int j=0;j<lista[0];j++)
        {
            if((int)vacia[j][i]==43)
            {
                if(flg3)
                {
                    salida2[1]=salida2[1]+1;
                    flg3=false;
                }
                if(flg)
                {

                    salida[0]=j;
                    salida[1]=i;
                    flg=false;
                    flg2=true;
                }
                if(flg2)
                    salida2[0]=salida2[0]+1;


            }


        }
        flg2=false;
        flg3=true;

    }
    cout<<endl<<"{"<<salida[0]<<","<<salida[1]<<","<<salida2[0]<<","<<salida2[1]<<"}"<<endl;


}

short int elementos(string entrada)
{
    int a=0;
    int b=0;

    while((int)entrada[a]!=0)
    {
        if((int)entrada[a]==44)b++;
        a++;
    }
    return b+=1;
}


int elevar(int b,int p)
{int c=1;
    for(int i=0;i<p;i++)
    {
        c*=b;
    }
    return c;
}

void vectores(int*lista,int*lista2, int b)
{
    for(int i=0;i<b;i++)
    {
        lista[i]=0;
        lista2[i]=0;
    }
}

void almacenar(string datos,int*lista,int*lista2)
{
    int a=0;
    int b=0;
    while((int)datos[a]!=0)
    {
        if((int)datos[a]!=44)
        {
            if((int)datos[a+1]!=44 && (int)datos[a+1]!=0)
            {
                lista[b]=lista[b]+1;
            }
            else
            {
                lista[b]=lista[b]+1;
                b++;
            }
        }
        a++;
    }
    a=0;
    b=0;
    while((int)datos[a]!=0)
    {
        if((int)datos[a]!=44)
        {
            if((int)datos[a]!=44)
            {
                lista2[b]+=(datos[a]-48)*elevar(10,(lista[b]-1));
                lista[b]=lista[b]-1;
                if(lista[b]==0)b++;
            }

        }
        a++;
    }
}
