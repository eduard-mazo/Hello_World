#include <iostream>
#include <time.h>
#include <stdlib.h>
#define dim 100
using namespace std;

void imprimir(char*letras2)
{
    cout<<endl;
    for(int i=0;i<26;i++)
    {
        cout<<(char)(i+65)<<"-->"<<(int)letras2[i]<<endl;
    }
    cout<<endl;
}

void generar(char *letras, char *letras2)
{    srand (time(NULL));
     char randoom=0;

      for(int i=0;i<26;i++)
      {
          letras2[i]=0;
      }
       for(int i=0;i<dim;i++)
       {
           randoom=rand() % 26 + 1;
           letras[i]=randoom+64;
           cout<<letras[i];
           switch (letras[i]) {
           case 65: //A
               letras2[0]+=1;
               break;
           case 66://B
               letras2[1]+=1;
               break;
           case 67://C
               letras2[2]+=1;
               break;
           case 68://D
               letras2[3]+=1;
               break;
           case 69://E
               letras2[4]+=1;
               break;
           case 70://F
               letras2[5]+=1;
               break;
           case 71://G
               letras2[6]+=1;
               break;
           case 72://H
               letras2[7]+=1;
               break;
           case 73://I
               letras2[8]+=1;
               break;
           case 74://J
               letras2[9]+=1;
               break;
           case 75://K
               letras2[10]+=1;
               break;
           case 76://L
               letras2[11]+=1;
               break;
           case 77://M
               letras2[12]+=1;
               break;
           case 78://N
               letras2[13]+=1;
               break;
           case 79://O
               letras2[14]+=1;
               break;
           case 80://P
               letras2[15]+=1;
               break;
           case 81://Q
               letras2[16]+=1;
               break;
           case 82://R
               letras2[17]+=1;
               break;
           case 83://S
               letras2[18]+=1;
               break;
           case 84://T
               letras2[19]+=1;
               break;
           case 85://U
               letras2[20]+=1;
               break;
           case 86://V
               letras2[21]+=1;
               break;
           case 87://W
               letras2[22]+=1;
               break;
           case 88://X
               letras2[23]+=1;
               break;
           case 89://Y
               letras2[24]+=1;
               break;
           case 90://Z
               letras2[25]+=1;
               break;
           }

       }
}
