#include <iostream>
#include "funciones.h"
#define Row 15
#define Col 20

#define clear() printf("\033[H\033[J")
using namespace std;

int main()
{
    int **lista;  // Inicializo mi apuntador a matriz bidimensional
    lista = new int *[Row]; // genero apundadores a las filas de mi matriz bidimensional
    for(int i = 0; i <Row; i++) // Genero apuntadores a las columnas de mi matriz bidimensional
    {
        lista[i] = new int[Col];
    }
    for(int i=0;i<Row;i++)  // Relleno mi Matriz con '-' para indicar asientos vacios
    {
        for(int j=0;j<Col;j++)
        {   lista[i][j]='-';

        }
    }

    buscar(lista);
    bool exit=0;
    while (!exit) {      // Inicio del programa


        cout<<endl<<"QUE ACCION DESEA REALIZAR"<<endl;
        cout<<"RESERVAR PRESIONE ---> 1"<<endl<<"CANCELAR PRESIONE ---> 2"<<endl;
        int d=0; //selector de accion
        int b=0;
        cin>>d;
        switch (d) {
        case 1:
            cout<<"BIENVENIDO AL SISTEMA DE RESERVA"<<endl<<"SELECCIONE UNA SILLA: ";
            break;
        case 2:
            cout<<"BIENVENIDO AL SISTEMA DE CANCELACIONES"<<endl<<"SELECCIONE UNA SILLA: ";
            break;
        default:
            exit=1;
            break;
        }
        cin.ignore();
        string reserva;  // Solicitio al usuario que ingrese fila y columna en formato (letra/numero)
        getline (cin, reserva); // Linea para adquirir dato
        while(reserva[b]!=0) // cuento elementos del string ingresado
        {
            if(reserva[b])b++;
        }
        int lista2[b]; // Con el tamano del vector le agrego un espacio mas para guardar la dimension
        for(int i=0;i<=b;i++)// for para guardar en mi matriz los datos capturados de esta forma puedo llevarlos a mi funcion
        {
            lista2[i]=reserva[i];
        }

        if(lista2[0]==88)
        {
            break;
        }
        clear();
        reservar(lista2,lista,b,d);
        buscar(lista);
    }

}




