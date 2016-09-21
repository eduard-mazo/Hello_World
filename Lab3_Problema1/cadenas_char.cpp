#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int largo_cadena(char origen[]);
void pegar(char origen[],char destino[]);

int main(){

    char letra;
    char cadena[8];
    char temp[10];
    int p=0;
    ifstream fin;
    ofstream fout;

    //    char dir[500]="/home/eduard/Documentos/Git/Lab3_Problema1/";
    char dir3[500]="/home/eduard/Documentos/Git/Lab3_Problema1/";
    //    char dir2[50]="";
    char dir4[50]="";

    //    cin>>dir2;
    cin>>dir4;
    //    pegar(dir2,dir);
    pegar(dir4,dir3);
    try{
        fin.open("/home/eduard/Documentos/Git/Lab3_Problema1/o.txt");
        if(fin.is_open()){

            //            fout.open(dir3);
            //            if(fout.is_open()){
            while(fin.good()){
                letra=fin.get();

                if(fin.good()){
                    //                    for(int j=7;j>=0;j--){
                    temp[p]=letra;
                    p++;


                    //                    }
                    //                        for(int k=0;k<8;k++){

                    //                            fout<<binario[k];


                    //                        }


                }
            }
            //                fout.close();
            //           }
            //            else
            //                throw 2;

        }
        else
            throw 1;
        fin.close();
        fout.open(dir3);
        if(fout.is_open()){

            int tamano=0;
            int yi;

            while((int)*(temp+tamano)!=10)
            {
                tamano++;
            }

            for(int i=0;i<tamano;i++)
            {
                for(int j=7;j>=0;j--){
                    yi=(int)temp[i]%2;
                    cadena[j]=yi;
                    temp[i]=(int)temp[i]/2;

                }
                for(int k=0;k<8;k++){

                    fout<<(char)(cadena[k]+48);


                }
            }


            fout.close();
        }
        else
            throw 2;

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

void pegar(char origen[],char destino[])
{

    int Largo1=0,Largo2=0;

    Largo1=largo_cadena(origen);
    Largo2=largo_cadena(destino);

    for(int i=0;i<Largo1;i++)
    {
        destino[Largo2+i]=origen[i];
    }
}

int largo_cadena(char origen[])
{
    int tamano=0;

    while(*(origen+tamano)!=0)
    {
        tamano++;
    }

    return tamano;
}
