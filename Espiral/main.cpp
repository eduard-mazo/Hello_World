#include <iostream>

using namespace std;

int a,b,c,d,i,j,k,dir=0;
int Spiral[5][5];

int main()
{a=1;
    b=5;
    k=5;
    dir=0;
    while(!c){
        switch (dir) {
        case 0: //derecha izquierda

            for(j=4;j>=0;j--)
            {cout<<a;
                Spiral[0][j]=a;
                a++;

            }
            k--;
            //d++;
            dir=1;
            cout<<endl<<"salgo de dir0-- ahora dir tiene: "<<dir<<endl;

            break;
        case 1: //arriba abajo
            cout<<"entro en dir=1"<<endl;
            for(i=1;i<=4;i++)
            {
                cout<<a;
                Spiral[i][0]=a;
                a++;

            }
            k--;
           // i++;
            dir=2;
            cout<<endl<<"salgo de dir1-- ahora dir tiene: "<<dir<<endl;
            break;
        case 2: //izquierda derecha

            cout<<"entro en dir=2"<<endl;
            for(j=1;j<=4;j++)
            {
                cout<<a;
                Spiral[4][j]=a;
                a++;

            }
            k--;
           // i++;
            dir=3;
            cout<<endl<<"salgo de dir2-- ahora dir tiene: "<<dir<<endl;
            break;

        case 3: //abajo arriba

            cout<<"entro en dir=3"<<endl;
            for(i=3;i>=1;i--)
            {
                cout<<a;
                Spiral[i][4]=a;
                a++;

            }
            k--;
           // i++;
            dir=4;
            cout<<endl<<"salgo de dir3-- ahora dir tiene: "<<dir<<endl;
            break;
        case 4: //abajo arriba
            for(i=0;i<b;i++)
            {
                for(j=0;j<b;j++)
                {
                    cout<<Spiral[i][j]<<"  ";
                }
                cout<<endl;
            }
            c=1;
            break;
        }

    }

}
