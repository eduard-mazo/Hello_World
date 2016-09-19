#include <iostream>
#define row 6
#define col 8

using namespace std;

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

void buscar(int**lista)
{

    string Encuentre;
    getline(cin,Encuentre);
    int x,y;
    x=(int)Encuentre[0]-48;
    y=(int)Encuentre[2]-48;
    int temp=0;
    temp=*(*(lista+x)+y)\
            +*(*(lista+(x-1))+y)+*(*(lista+(x+1))+y)\
            +*(*(lista+x)+(y-1))+*(*(lista+x)+(y+1));
    temp/=5;
    if(temp>=6)cout<<endl<<"ES UNA ESTRELLA: "<<"("<<x<<","<<y<<")"<<endl;
    else cout<<endl<<"NO ES UNA ESTRELLA: "<<"("<<x<<","<<y<<")"<<endl;

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
