#include <iostream>
#include <cstdlib>
#include <time.h>
#define clear() cout<<"\033[H\033[J"

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
    // Set_team();
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
    int mientras=0;
    int temp2=0,temp3=0,temp4=1;
    for(int i=0;i<temp;i++)
    {
        temp2=rand()%2;

        temp4=rand()%20+mientras;
        mientras=temp4;
        temp3=rand()%11;

        if(temp2)
        {
            *(*(report+0)+i)/*[0][i]*/=temp2;// EQUIPO QUE METE GOL
            *(*(report+1)+i)=temp3;// JUGADOR QUE METE GOL
            *(*(report+2)+i)=temp4;// MINUTO
            *(marcador+1)+=1;

        }

        else
        {
            *(*(report+0)+i)/*[0][i]*/=temp2;// EQUIPO QUE METE GOL
            *(*(report+1)+i)=temp3;// JUGADOR QUE METE GOL
            *(*(report+2)+i)=temp4;// MINUTO
            *marcador+=1;

        }
    }
    //    for(int i=0;i<temp;i++){
    //        *(*(report+0)+i)/*[0][i]*/=tempreport[0][i];// EQUIPO QUE METE GOL
    //        *(*(report+1)+i)=tempreport[1][i];// JUGADOR QUE METE GOL
    //        *(*(report+2)+i)=tempreport[2][i];// MINUTO
    //    }

    Gol=temp;
}

void Partido::Set_team()
{

    char temp[20];
    for(int i=0;i<2;i++)
    {   clear();
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
    //    char temp2[10];
    //    Get_team_name(temp2);
    for(int i=0;i<11;i++)
    {
        clear();
        cout<<"\t"<<nameE<<endl;
        cout<<endl<<"INGRESE EL NOMBRE DEL JUGADOR ["<<i+1<<"]: ";
        cin>>temp;
        jugadores[i].set_name(temp);
    }

}



