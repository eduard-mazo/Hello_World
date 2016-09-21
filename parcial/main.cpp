#include <iostream>

using namespace std;

int main()
{
   char *hola={"HOLA"};
   char *ptr=hola;
   int i=0;
while((int)*(ptr+i)!=0)
{
    cout<<endl<<(int)*(ptr+i);
    i++;
}
cout<<endl;





}
