#include <iostream>

using namespace std;
//DEFINO PROTOTIPO FUNCION QUE IMPRIME TABLERO DE JUEGO
void prig();

int i,j,a,b,c,d,e;
int game[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int game1[3][3]={0};

int main()
{

    prig();
}

void prig()
{cout<<endl<<'\t'<<"_____________"<<endl;
    for(i=0;i<=2;i++)
    {   cout<<endl<<'\t'<<"| ";
        for(j=0;j<=2;j++)
        {
            if(a)cout<<game[i][j]<<" | ";
            else cout<<game1[i][j]<<" | ";
        }
        cout<<endl<<'\t'<<"_____________"<<endl;
    }
    cout<<endl;
}
