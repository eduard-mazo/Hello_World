#include <iostream>
#define row 6
#define col 8
void rellenar(int**);
void imprimir(int**);
bool buscar(int**,int,int);
using namespace std;

int main()
{
    bool resultado=false;
    int **lista;
    lista= new int*[row];
    for(int i=0;i<row;i++)
        lista[i]= new int[col];

    rellenar(lista);

    imprimir(lista);

    cout<<endl<<"INGRESE LA POSICION I - J, SEPARADAS UN ESPACIO PARA COMENZAR EL ANALISIS: ";
    string Encuentre;
    getline(cin,Encuentre);
    int f,c;
    f=(int)Encuentre[0]-48;
    c=(int)Encuentre[2]-48;

resultado=buscar(lista,f,c);
if(resultado)cout<<endl<<"ES UNA ESTRELLA: "<<"("<<f<<","<<c<<")"<<endl;
else cout<<endl<<"NO ES UNA ESTRELLA: "<<"("<<f<<","<<c<<")"<<endl;




}

void imprimir(int**lista)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0; j<col;j++)
        {
            cout<<*(*(lista+i)+j)<<"  ";
            if(*(*(lista+i)+j)<10)cout<<" ";
        }
        cout<<endl;
    }
}

bool buscar(int**lista,int x,int y)
{
   int temp=0;
temp=*(*(lista+x)+y)\
     +*(*(lista+(x-1))+y)+*(*(lista+(x+1))+y)\
     +*(*(lista+x)+(y-1))+*(*(lista+x)+(y+1));
temp/=5;
if(temp>=6)return true;
return false;
}

void rellenar(int**lista)
{
    int estrellas[row][col]={
        {0,3,4,0,0,0,6,8},
        {5,13,6,0,0,0,2,3},
        {2,6,2,7,3,0,10,0},
        {0,0,4,15,4,1,6,0},
        {0,0,7,12,6,9,10,4},
        {5,0,6,10,6,4,8,0}
    };
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            *(*(lista+i)+j)=estrellas[i][j];
        }
    }
}
