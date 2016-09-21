#include <iostream>

using namespace std;
#define clear() printf("\033[H\033[J") // limpio terminal

//DEFINO PROTOTIPO FUNCION QUE IMPRIME TABLERO DE JUEGO
//void prig();
//int llena(int,int,char);

//int i,j,a,b,c,d,e,m,p,q,count,z,FSM=0;
//int game[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//char game1[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
//char b1;
void retorna(int*ptr, int f, int c, int *sel, int a);
void imprime(int*ptr, int f, int c, int * sel, bool *flg, bool flg2);

int main()

{
    int game[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int game2[3][3]={{'*','*','*'},{'*','*','*'},{'*','*','*'}};
    int sel[2]={0,0};
    bool flg=false;
    bool flg2=false;
    int a=1;
    int (*ptr)[3]=game;
    int (*ptr2)[3]=game2;
    imprime(*ptr,3,3,sel,&flg,flg2);
    flg2=true;
    while(a!=0){

        cin>>a;
        flg=!flg;

        retorna(*ptr,3,3,sel,a);
        imprime(*ptr2,3,3,sel,&flg,flg2);

    }

































    /*

            //DECIDE SI GANA PLAYER 1 O PLAYER 2
            if(game1[0][0]==88){
                if(game1[0][1]==88)
                    if(game1[0][2]==88)p=1;


                if(game1[1][1]==88)
                    if(game1[2][2]==88)p=1;


                if(game1[0][1]==88)
                    if(game1[0][2]==88)p=1;
            }

            if(game1[2][0]==88){
                if(game1[2][1]==88)
                    if(game1[2][2]==88)p=1;


                if(game1[1][1]==88)
                    if(game1[0][2]==88)p=1;
            }

            if(game1[1][0]==88)
                if(game1[1][1]==88)
                    if(game1[1][2]==88)p=1;

            if(game1[0][1]==88)
                if(game1[1][1]==88)
                    if(game1[2][1]==88)p=1;

            if(game1[0][2]==88)
                if(game1[1][2]==88)
                    if(game1[2][2]==88)p=1;

            //--------------------------------------------------------//

            if(game1[0][0]==79){
                if(game1[0][1]==79)
                    if(game1[0][2]==79)q=1;


                if(game1[1][1]==79)
                    if(game1[2][2]==79)q=1;


                if(game1[0][1]==79)
                    if(game1[0][2]==79)q=1;
            }

            if(game1[2][0]==79){
                if(game1[2][1]==79)
                    if(game1[2][2]==79)q=1;


                if(game1[1][1]==79)
                    if(game1[0][2]==79)q=1;
            }

            if(game1[1][0]==79)
                if(game1[1][1]==79)
                    if(game1[1][2]==79)q=1;

            if(game1[0][1]==79)
                if(game1[1][1]==79)
                    if(game1[2][1]==79)q=1;

            if(game1[0][2]==79)
                if(game1[1][2]==79)
                    if(game1[2][2]==79)q=1;

            d=!d; // VARIABLE PARA CAMBIAR DE JUGADOR
            FSM=1;// ESTADO PARA IMPRIMIR SIGUIENTE JUGADOR
count++;
if(count==9)z=1;

            break;

        }
    }
}

void prig()
{cout<<endl<<'\t'<<"_____________"<<endl;
    for(i=0;i<=2;i++)
    {   cout<<endl<<'\t'<<"| ";
        for(j=0;j<=2;j++)
        {
            if(!a)cout<<game[i][j]<<" | ";
            else cout<<game1[i][j]<<" | ";
        }
        cout<<endl<<'\t'<<"_____________"<<endl;
    }
    cout<<endl;
}
int llena(int Row,int Col,char Sel1)
{   int FSM1;

    cout<<endl<<"------->"<<game1[Row][Col]<<"  "<<"Row: "<<Row<<"  Col: "<<Col<<"<--------------"<<endl;
    if(game1[Row][Col]=='X'){cout<<endl<<"Espacio Ocupado por Jugador 1";
        FSM1=3;}
    if(game1[Row][Col]=='O') {cout<<endl<<"Espacio Ocupado por Jugador 2";
        FSM1=3;}
    if(game1[Row][Col]==Sel1){

        if(!d)game1[Row][Col]='X';
        else game1[Row][Col]='O';
        FSM1=4;
    }



    return FSM1;
    */
}
void imprime(int*ptr,int f,int c,int * sel,bool* flg,bool flg2)
{

    clear();
    cout<<endl<<sel[0]<<" "<<sel[1]<<endl;
    if(flg2)
    {
        if((int)ptr[sel[0]*c+sel[1]]!=88&&(int)ptr[sel[0]*c+sel[1]]!=79)
        {
            if(*flg)ptr[sel[0]*c+sel[1]]='X';

            else ptr[sel[0]*c+sel[1]]='O';
        }
        else {
            cout<<"ESPACIO OCUPADO"<<endl<<endl;
           *flg=!*flg;

        }
    }

    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)

        {

            cout<< (char)ptr[i*c+j];
        }
        cout<<endl;
    }

}


void retorna(int*ptr,int f,int c,int * sel,int a)
{
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(ptr[i*c+j]==a+48){
                sel[0]=i;
                sel[1]=j;}

        }

    }
}
