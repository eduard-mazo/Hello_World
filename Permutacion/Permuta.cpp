#include <iostream>
// 2783915460
// 27859604
using namespace std;

int main()
{
    int lista[10]={3,1};
  long  int done=0;
    bool flg=true;
    int i=0;
    while (flg)
    {
        for(i=0;i<2;i++ )
        {
            done++;
            if(done>=1000001)
            {
                done=i;
                flg=false;
                break;
            }
        }

    }
    cout<<endl<<"EL SIGUIENTE # ES: "<<lista[done]<<endl;
}
