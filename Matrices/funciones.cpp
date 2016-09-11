#include <iostream>
#define Row 15
#define Col 20
using namespace std;

void reservar(int*list1,int**list2,int n,int m)
{    int x=0;
     if(n==2)x=(*(list1+1)-48);
     if(n==3)x=(*(list1+1)-48)*10+(*(list1+2)-48);
     if(m==1)
     {
         if(n==1)cout<<endl<<"INGRESASTE UNA UBICACION INCORRECTA";
         else
         {
             *(*(list2+(*(list1)-65))+x-1)='x';
         }
     }
     if(m==2)
     {
         *(*(list2+(*(list1)-65))+x-1)='-';
     }
}


void buscar(int**list)
{

    cout<<endl<<"***********************************";
    cout<<endl<<"\t CINEMAS PIOR ES NADA";
    cout<<endl<<"\t       SALA #1";
    cout<<endl<<"***********************************"<<endl;

    for(int i=0;i<Row;i++)
    {
        for(int j=0;j<Col;j++)
        {
            cout<<(char)list[i][j];
        }
        cout<<endl;
    }
}


