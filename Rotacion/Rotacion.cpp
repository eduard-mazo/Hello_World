#include <iostream>

using namespace std;
void imprimir(int**);
int main()
{
    int **lista;
    lista=new int*[5];
    for(int i=0;i<5;i++)
        lista[i]=new int[5];
    int a=1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            *(*(lista+i)+j)=a;
            a++;
        }
    }
    imprimir(lista);
}

void imprimir(int**lista)
{bool fsm=true;
    int rot=0;
    while(fsm){
        switch (rot)
        {
        case 0:
            cout<<endl<<"\tORIGINAL"<<endl;

            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<*(*(lista+i)+j)<<" ";
                    if(*(*(lista+i)+j)<10)cout<<" ";
                }
                cout<<endl;
            }
            rot=1;
            break;

        case 1:
            cout<<endl<<"\t90 GRADOS"<<endl;

            for(int i=4;i>=0;i--)
            {
                for(int j=0;j<5;j++)
                {
                    cout<<*(*(lista+j)+i)<<" ";
                    if(*(*(lista+j)+i)<10)cout<<" ";
                }
                cout<<endl;
            }
            rot=2;
            break;

        case 2:
            cout<<endl<<"\t180 GRADOS"<<endl;

            for(int i=4;i>=0;i--)
            {
                for(int j=4;j>=0;j--)
                {
                    cout<<*(*(lista+i)+j)<<" ";
                    if(*(*(lista+i)+j)<10)cout<<" ";
                }
                cout<<endl;
            }
            rot=3;
            break;

        case 3:
            cout<<endl<<"\t270 GRADOS"<<endl;

            for(int j=0;j<5;j++)
            {
                for(int i=4;i>=0;i--)
                {
                    cout<<*(*(lista+i)+j)<<" ";
                    if(*(*(lista+i)+j)<10)cout<<" ";
                }
                cout<<endl;
            }
           fsm=false;
            break;

        }
    }
}
