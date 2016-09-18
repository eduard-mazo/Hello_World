#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "funciones.h"
#define dim 100
using namespace std;


int main()
{
    char letras[dim];
    char letras2[26];
    generar(letras,letras2);
    imprimir(letras2);

}
