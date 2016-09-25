#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;
// srand(time(NULL)); SEMILLA PARA RAND;

class Jugador{

private:
    char nameJ[10]={0};
public:
    void set_name(char* nombre);
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
    int Gol;
    int report[3][10];
public:
    void Set_team();
    void Set_marcador(); // DEFINO EL MARCADOR Y ALMACENO GOLES TOTALES
    int* Get_marcador();
    void Set_values();
    void miPartido();


};

int main()
{
    Partido clasico;
 clasico.miPartido();
 cout<<"EL ENCUENTRO FINALIZO: ["<<clasico.Get_marcador()[0]<<","<<clasico.Get_marcador()[1]\
    <<"]"<<endl;

}
void Partido::miPartido()
{
    Set_values();
    Set_team();
    Set_marcador();

}

void Partido::Set_values()
{
    Gol=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<10;j++)
        {
            *(*(report+i)+j)=0;
        }
    }
}

void Jugador::set_name(char* nombre)
{
    int i=0;
    while(*(nombre+i)!=0){
        *(nameJ+i)=*(nombre+i);
        i++;
    }
}

int* Partido::Get_marcador()
{
    return marcador;
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
        temp4=rand()%mientras;
        mientras=temp4;

        if(temp2)
        {
            *(marcador+1)+=1;
            *(*(report+0)+i)/*[0][i]*/=temp2;// EQUIPO QUE METE GOL
            report[1][i]=temp3;// JUGADOR QUE METE GOL
            report[2][(temp-1)-i]=temp4;// MINUTO
        }

        else
        {
            *marcador+=1;
            report[0][i]=temp2;// EQUIPO QUE METE GOL
            report[1][i]=temp3;// JUGADOR QUE METE GOL
            report[2][(temp-1)-i]=temp4;// MINUTO
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



