#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
// srand(time(NULL)); SEMILLA PARA RAND;

class Jugador{

private:
    char nameJ[10]={0};
public:
    void set_name(char* nombre){
        int i=0;
        while(*(nombre+i)!=0){
            *(nameJ+i)=*(nombre+i);
            i++;
        }
    }
    void get_name(char* nombre);
};

class Equipo{

private:
    char nameE[10]={0};
    Jugador jugadores[11];
public:
    void Set_name(char* nombre);
    void player_names();
    void Get_team_name(char *nombre);
};

class Partido{

private:
    Equipo equipos[2];
    int marcador[2]={0,0};
    int duracion;
    int Gol;
    int report[3][10];
public:
    void Set_team();
    void Set_marcador(); // DEFINO EL MARCADOR Y ALMACENO GOLES TOTALES
    void Get_marcador(int*);


};

int main()
{  int marcador[2];
    Partido clasico;
    //clasico.Set_team();
    clasico.Set_marcador();
    clasico.Get_marcador(marcador);
    cout<<marcador[0]<<" "<<marcador[1];


}


void Partido::Get_marcador(int*resul)
{
    *resul=*marcador;
    *(resul+1)=*(marcador+1);
}

void Partido::Set_marcador()
{
    srand(time(NULL));
    int temp=rand()%10;
    int mientras=90;
    int temp2,temp3,temp4=1;
    for(int i=0;i<temp;i++)
    {
        temp2=rand()%2;
        temp3=rand()%11;
        temp4=rand()%mientras+temp4;

        mientras-=temp4;

        if(temp2)
        {
            *(marcador+1)+=1;
            report[0][i]=temp2;// EQUIPO QUE METE GOL
            report[1][i]=temp3;// JUGADOR QUE METE GOL
            report[2][i]=temp4;// MINUTO
        }

        else
        {
            *marcador+=1;
            report[0][i]=temp2;// EQUIPO QUE METE GOL
            report[1][i]=temp3;// JUGADOR QUE METE GOL
            report[2][i]=temp4;// MINUTO
        }
    }

    Gol=temp;
}

void Partido::Set_team()
{
    char temp[20];
    for(int i=0;i<2;i++)
    {
        cout<<endl<<"INGRESE EL NOMBRE DEL EQUIPO ["<<i<<"]: ";
        cin>>temp;
        equipos[i].Set_name(temp);
    }
}

void Jugador::get_name(char* nombre)
{
    int i=0;
    while(*(nameJ+i)!=0){
        *(nombre+i)=*(nameJ+i);
        i++;
    }

}
void Equipo::Set_name(char *nombre)
{
    int i=0;
    while(*(nombre+i)!=0){
        *(nameE+i)=*(nombre+i);
        i++;
    }
    player_names();
}

void Equipo::Get_team_name(char* nombre)
{
    int i=0;
    while(*(nameE+i)!=0){
        *(nombre+i)=*(nameE+i);
        i++;
    }
}

void Equipo::player_names()
{
    char temp[20];
    for(int i=0;i<11;i++)
    {
        cout<<endl<<"INGRESE EL NOMBRE DEL JUGADOR ["<<i+1<<"]: ";
        cin>>temp;
        jugadores[i].set_name(temp);
    }

}



