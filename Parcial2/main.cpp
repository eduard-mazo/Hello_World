#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(){

    char cadena[15], letra;
    int binario[8];
    ifstream fin;
    ofstream fout;

    try{
        fin.open("/home/eduard/Documentos/Git/Parcial2/hola.txt");
        if(fin.is_open()){

            fout.open("/home/eduard/Documentos/Git/Parcial2/archivoBinario.txt");
            if(fout.is_open()){
            while(fin.good()){
                letra=fin.get();
                if(fin.good()){
//                    for(int j=7;j>=0;j--){

//                        binario[j]=(int)letra%2;
//                        letra/=2;

//                    }


                        fout<<(int)letra;



                }
            }
            fout.close();
            }
            else
                throw 2;

        }
        else
            throw 1;
        fin.close();
        cout << "Archivo Codificado a binario"<<endl;


    }

    catch (int e){

        if(e==1){
            cout<<"Error de Lectura del archivo de texto" << endl;
        }
        else if(e==2){
            cout<<"Error de escritura del archivo de texto binario"<< endl;
        }
    }

    return 0;
}
