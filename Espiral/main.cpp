#include <iostream>

using namespace std;

int a,ja,ia,l,d,mov1,mov2,dim,c,i,j,k,dir=0;
int Spiral[5][5];

int main()
{   cout<<"*** PROBLEMA 15 ***"<<endl;
    cout<<"INGRESE UN NUMERO IMPAR, PARA GENERAR MATRIZ N*N: ";
    cin>>dim;
    cout<<"//--//--//--//--//--//--//--//--//--//--//--//--//--//--//"<<endl;
    cout<<"--//--//--//--//--//--//--//--//--//--//--//--//--//--//--"<<endl<<endl;
    int Spiral[dim][dim];
    a=dim*dim;
    ja=dim-1;
    d=ja;
    mov2=d;
    l=0;
    ia=1;
    mov1=l;
    dir=0;
    while(!c)
    {
        switch (dir) {
        case 0: //derecha izquierda

            for(j=ja;j>=l;j--)
            {
                Spiral[mov1][j]=a;
                a--;

            }
            dir=1;
            l++;


            break;
        case 1: //arriba abajo

            for(i=ia;i<=d;i++)
            {
                Spiral[i][mov1]=a;
                a--;
            }
            dir=2;
            d--;
            mov1++;

            break;
        case 2: //izquierda derecha

            for(j=l;j<=ja;j++)
            {
                Spiral[mov2][j]=a;
                a--;
            }
            dir=3;
            ja--;

            break;

        case 3: //abajo arriba

            for(i=d;i>=ia;i--)
            {
                Spiral[i][mov2]=a;
                a--;
            }
            dir=0;
            ia++;
            mov2--;

            break;
        case 4: //abajo arriba
            for(i=0;i<dim;i++)
            {
                for(j=0;j<dim;j++)
                {   if(Spiral[i][j]<10)cout<<" ";
                    cout<<Spiral[i][j]<<"  ";
                }
                cout<<endl;
            }
            cout<<endl<<"//--//--//--//--//--//--//--//--//--//--//--//--//--//--//"<<endl;
            cout<<"--//--//--//--//--//--//--//--//--//--//--//--//--//--//--"<<endl;
            c=1; //exit while..
            break;
        }
        if(a<1)dir=4;

    }

}
