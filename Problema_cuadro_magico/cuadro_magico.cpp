#include <iostream>
#define clear() cout<<"\033[H\033[J";

using namespace std;
void imprimir(int**, int, bool);
void rellenar(int**,int);
bool revisar(int**,int);
int main()
{

    int dim;
    cout<<"\tCUADRADO MAGICO"<<endl<<endl<<"INGRESE LA DIMENSION DE SU MATRIZ ";
    cin>>dim;
    int **lista;
    lista=new int*[dim];  //filas
    for(int i=0;i<dim;i++)
        lista[i]=new int[dim]; //columnas
    cin.ignore();
    rellenar(lista,dim);
    bool check=false;
    check=revisar(lista,dim);
    imprimir(lista,dim,check);

}
bool revisar(int**lista,int dim)
{
    int row[dim];
    int col[dim];
    int dia=0;
    int dia2=0;
    for(int i=0;i<dim;i++)
    {
        row[i]=0;
        for(int j=0;j<dim;j++)
        {
            row[i]+=(int)*(*(lista+i)+j);
            if(j==i)dia+=(int)*(*(lista+i)+j);
            if((dim-1)-j==(dim-1)-i)dia2+=(int)*(*(lista+((dim-1)-i))+((dim-1)-j));
        }

    }
    for(int i=0;i<dim;i++)
    {
        col[i]=0;
        for(int j=0;j<dim;j++)
        {
            col[i]+=(int)*(*(lista+j)+i);
        }

    }
    short int test=0;
    if(dia==dia2)
    {
        for(int i=0;i<dim;i++)
        {
            if(dia==col[i])
                if(dia==row[i])test+=1;
        }


    }
 if(test==dim)return true;
 else return false;
}
void rellenar(int**lista,int dim)
{
    bool b=true;
    int i=0;

    while (b)
    {
        int y=0;
        int j=0;
        string fila;
        getline(cin,fila);
        while((int)fila[y]!=0)
        {
            if((int)fila[y]!=32)
            {
                if((int)fila[y+1]==32||(int)fila[y+1]==0){
                    *(*(lista+i)+j)=(int)fila[y]-48;


                }

                else {*(*(lista+i)+j)=((int)fila[y]-48)*10+(int)fila[y+1]-48;

                    y++;}
                j++;
                y++;
            }
            else y++;
        }
        i++;
        if(i>=dim)b=false;

    }
}

void imprimir(int**lista,int dim,bool check)
{
    clear();
    if(check)
    {
        cout<<"\tEL CUADRO MAGICO QUE INGRESASTE "<<endl<<endl;
        for(int i=0;i<dim;i++)
        {
            for(int j=0;j<dim;j++)
            {
                cout<<*(*(lista+i)+j)<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"\tLO SIENTO NO ES UN CUADRO MAGICO "<<endl<<endl;
        for(int i=0;i<dim;i++)
        {
            for(int j=0;j<dim;j++)
            {
                cout<<*(*(lista+i)+j)<<" ";
            }
            cout<<endl;
        }
    }

}
