#include <iostream>

using namespace std;
#define clear() printf("\033[H\033[J") // limpio terminal

//DEFINO PROTOTIPO FUNCION QUE IMPRIME TABLERO DE JUEGO
void prig();
int llena(int,int,char);

int i,j,a,b,c,d,e,m,p,q,count,z,FSM=0;
int game[3][3]={{1,2,3},{4,5,6},{7,8,9}};
char game1[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char b1;


int main()
{   while(!e){// GAME LOOP

        switch (FSM) { // MAQUINA DE ESTADO
        case 0: //ESTADO DE BIENVENIDA
            clear();
            prig(); // FUNCION PARA IMPRIMIR
            cout<<endl<<"BIENVENIDO ----> TRIQUI GAME POR EDUARD ALFONSO MAZO QUINTERO C.C 1020430991  "<<endl;
            cout<<endl<<"Para comenzar, se explica la dinamica."<<endl<<"El tablero de juego, se muentra en la parte superior,"<<endl;
            cout<<"eleccionando cualquier numero del 1-9 cada jugar realiza su seleccion, ";
            cout<<endl<<"gana el jugador que logre hacer tres en linea. "<<endl<<endl<<"PRESIONA 0(CERO) PARA CONTINUAR "<<endl;
            cin>>b1;
            cout<<b1<<endl;
            a=1;
            if((b1-48)==0)FSM=1;
            break;
        case 1:      //ESTADO PARA PLAYER 1 y PLAYER 2

            clear();
            prig();
            if(!d)cout<<"JUGADOR #1: ";
            else cout<<"JUGADOR #2: ";
            if(p){cout<<endl<<"GANA X"<<endl;
                e=1;}
            else if (q) {cout<<endl<<"GANA 0"<<endl;
                e=1;}
            else if(z){cout<<endl<<"PERDEDORES  "<<endl;
                e=1;}
            else FSM=3;
            break;

        case 2:// EN ESTE ESTADO DE LA FSM EL SWITCH ANIDADO ES UN HANDLER PARA RELLENAR LA MATRIZ

            switch ((b1-48)) {

            case 1:
                FSM=llena(0,0,b1);
                break;
            case 2:
                FSM=llena(0,1,b1);
                break;
            case 3:
                FSM=llena(0,2,b1);
                break;
            case 4:
                FSM=llena(1,0,b1);
                break;
            case 5:
                FSM=llena(1,1,b1);
                break;
            case 6:
                FSM=llena(1,2,b1);
                break;
            case 7:
                FSM=llena(2,0,b1);
                break;
            case 8:
                FSM=llena(2,1,b1);
                break;
            case 9:
                FSM=llena(2,2,b1);
                break;
            case 0: // ESTADO CUANDO SE INGRESA UN CARACTER INVALIDO
                cout<<endl<<"MALA ELECCION "<<endl;
                cout<<"SELECCIONA NUEVAMENTE: ";
                FSM=3;
                break;
            }
            break;

        case 3: // ESTADO PARA RECIBIR INGRESO DE USUARIO
            cin>>b1;
            if(((b1-48)>9)||((b1-48)<1))b1=48;
            clear();
            prig();
            FSM=2;
            break;

        case 4:
            clear();
            prig();
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
}
