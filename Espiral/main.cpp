#include <iostream>

using namespace std;
// inicio variables
int a,ja,ia,l,d,mov1,mov2,dim,c,i,j,k,dir,sum=0;


int main()
{   cout<<"*** PROBLEMA 15 ***"<<endl;
    cout<<"INGRESE UN NUMERO IMPAR, PARA GENERAR MATRIZ N*N: ";
    cin>>dim;
    k=dim;
    k/=2;
    if(k==0)
    {
        c=1;        // condicion que me permite verificar si el # es PAR o IMPAR
        cout<<endl<<"INGRESASTE UN # PAR -.-"<<endl;
    }
    int Spiral[dim][dim]; // Determino el tamano que mi matriz va a tener
    a=dim*dim;  // Inicia mi contador descendente, adquiere el valor maximo de la matriz n*n
    ja=dim-1; // variable que me permite controlar el inicio en izq y el final en der de los ciclos for respectivos
    d=ja; // variable que me permite controlar el inicio en up y el final en down de los ciclos for respectivos
    mov2=d; // variable que controla el apuntador i en der y j en up
    l=0; // variable que me permite controlar el inicio en izq y el final en der de los ciclos for respectivos
    ia=1; // variable que me permite controlar el inicio en down y el final en up de los ciclos for respectivos
    mov1=l; // apuntador i en izq y j en down
    dir=0; // selector
    sum+=a; // inicio la suma con el mayor valor
    while(!c)
    {
        switch (dir) {
        case 0: //derecha izquierda


            for(j=ja;j>=l;j--)
            {
                Spiral[mov1][j]=a;
                a--;
            }
            sum+=(a+1);// sumo la esquina superior izq
            dir=1;
            l++;
            break;
        case 1: //arriba abajo

            for(i=ia;i<=d;i++)
            {
                Spiral[i][mov1]=a;
                a--;
            }
            sum+=(a+1); // sumo esquina inferior izq
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
            sum+=(a+1); // sumo esquina inferior der
            dir=3;
            ja--;
            break;

        case 3: //abajo arriba

            for(i=d;i>=ia;i--)
            {
                Spiral[i][mov2]=a;
                a--;
            }
            sum+=(a); // sumo esquina superior der
            dir=0;
            ia++;
            mov2--;
            break;
        case 4: // Case para Imprimir en pantalla

            cout<<"//--//--//--//--//--//--//--//--//--//--//--//--//--//--//"<<endl;
            cout<<"--//--//--//--//--//--//--//--//--//--//--//--//--//--//--"<<endl<<endl;
            for(i=0;i<dim;i++)
            {
                for(j=0;j<dim;j++)
                {   if(Spiral[i][j]<10)cout<<" "; // Condiciones para que la matriz se vea bonita
                    if(Spiral[i][j]<100)cout<<" ";
                    cout<<Spiral[i][j]<<"  ";// Imprime en pantalla los valores almacenados en la matriz
                }                            // de tal forma que se logre el efecto deseado.
                cout<<endl;
            }
            cout<<endl<<"LA SUMA DE LAS DIAGONALES ES: "<<(sum-1)<<endl;
            cout<<endl<<"//--//--//--//--//--//--//--//--//--//--//--//--//--//--//"<<endl;
            cout<<"--//--//--//--//--//--//--//--//--//--//--//--//--//--//--"<<endl;
            c=1; //exit while..
            break;
        }
        if(a<1)dir=4;

    }

}
