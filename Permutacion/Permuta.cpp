#include <iostream>

// 2783915460

// 2785960431   sumando 1 a ref y >=
// 2789360451
using namespace std;
void fact(int*);
void busca(int*, int, int, int*);

int main()

{
    int lista[10]={0,1,2,3,4,5,6,7,8,9};
    bool flg2=true;
    int ref=0;
    int a=10;
    int b=a;
    cin>>ref;
    cout<<endl<<"EL NUMERO LEXICOGRAFICO ES: ";
    while(flg2){
        a=b;
       // cout<<endl<<"EL # ES: "<<a<<endl;

        fact(&a);
        a/=b;
        //a+=1;

        //cout<<endl<<"# PROCESADO ES: "<<a<<endl;

        busca(lista,ref,a,&b);
        if(!b)flg2=false;
    }
    cout<<endl;

}
void busca(int*lista,int ref,int now,int* dim)
{


    ref/=now;
    //ref+=1;
   // cout<<endl<<"valor referencia: "<<ref<<endl<<"valor now: "<<now<<endl;
    long  int done=0;
    bool flg=true;
    int i=0;
    while (flg)
    {
        for(i=0;i<*dim;i++ )
        {
            done++;

            if(done>ref)
            {
                done=i;
                flg=false;
                break;
            }
        }

    }
    cout<<lista[done];
   // cout<<endl<<"EL SIGUIENTE # ES: "<<lista[done]<<endl;
    lista[done]=lista[0];
    for(int i=0;i<*dim;i++)
    {
        lista[i]=lista[i+1];
    }
    *dim=*dim-1;


}


void fact(int*c)
{

    int b;
    b=*c;

    for(int i=1;i<b;i++)
    {
        *c*=i;
    }
}
