#include <iostream>
#define row1 10
#define row2 7
#define col1 3
#define col2 6
#define x1 7
#define y1 0
#define x2 5
#define y2 2

using namespace std;

int elevar(int, int);
short int elementos(string);
void vectores(int*,int);
void almacenar(string,int*,int*);
short int x,p=0;
bool flg=true;
bool flg2=false;
int main()
{
    string datos,datos2;
    getline(cin,datos);
    getline(cin,datos2);
    x=elementos(datos);
    p=elementos(datos2);
    int lista[x],lista2[x],salida[2],salida2[2],lista3[p],lista4[p];

    vectores(lista,x);
    vectores(lista2,x);
    vectores(salida,2);
    vectores(salida2,2);
    vectores(lista3,p);
    vectores(lista4,p);

    almacenar(datos,lista,lista2);
    almacenar(datos2,lista3,lista4);

    //int mat[x1+col1][y1+row1];
    int mat[lista2[0]+lista2[2]][lista2[1]+lista2[3]];
    int mat2[lista4[0]+lista4[2]][lista4[1]+lista4[3]];

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

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<11;j++)
        {
            if((int)mat2[j][i]==(int)mat[j][i])
            {
                if((int)mat2[j][i]==42)
                {
                    if(flg)
                    {
                        salida[0]=j;
                        salida[1]=i;
                        cout<<endl<<"("<<salida[0]<<","<<salida[1]<<")"<<endl;
                        flg=false;
                        flg2=true;
                    }
                    if(flg2)
                        salida2[0]=salida2[0]+1;

                }
            }
            if((int)mat2[j][i+1]==(int)mat[j][i+1])
            {
                if((int)mat2[j][i]==42)
                {
                    salida2[1]=salida2[1]+1;

                }
            }

        }
        if(flg2)flg2=false;

    }
    cout<<endl<<"("<<salida2[0]<<","<<salida2[1]<<")"<<endl;



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

void vectores(int*lista, int b)
{
    for(int i=0;i<b;i++)
    {
        lista[i]=0;
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
