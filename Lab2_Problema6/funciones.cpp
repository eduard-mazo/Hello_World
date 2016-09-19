#include <iostream>


using namespace std;

void upcase()
{    string letras;
    getline(cin,letras);
     cout<<endl<<"\tORIGINAL:\t"<<letras;
    int i=0;
    while(letras[i]!=0)
    {
        if((int)letras[i]>96 && (int)letras[i]<123)letras[i]=(int)letras[i]-32;

        i++;
    }
cout<<endl<<"\tUPPERCASE:\t"<<letras<<endl;

}
