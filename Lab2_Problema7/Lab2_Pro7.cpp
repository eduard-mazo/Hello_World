#include <iostream>
#include "funciones.h"

using namespace std;

void tamano(string a, int* x);
void clasificar(string letras,int x);

int main()
{   string letras;
    int x=0;
    getline(cin,letras);
    tamano(letras,&x);
    clasificar(letras,x);

}
