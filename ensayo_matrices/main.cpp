#include <iostream>
#define row1 10
#define row2 7
#define col1 3
#define col2 6
#define x1 7
#define y1 0
#define x2 5
#define y2 2

using namespace std;

int main()

{   bool flg=true;
    bool flg2=false;

    int salida[2][2]={{0,0},{0,0}};
    int mat[x1+col1][y1+row1];
    int mat2[x2+col2][y2+row2];
    cout<<endl<<"\tPRIMER CUADRADO"<<endl<<endl;
    for(int i=y1;i<row1+y1;i++)
    {
        for(int j=x1;j<col1+x1;j++)
        {
            mat[j][i]='*';
            cout<<" "<<(char)mat[j][i];
        }
        cout<<endl;
    }
    cout<<endl<<"\tSEGUNDO CUADRADO"<<endl<<endl;
    for(int i=y2;i<row2+y2;i++)
    {
        for(int j=x2;j<col2+x2;j++)
        {
            mat2[j][i]='*';
            cout<<" "<<(char)mat2[j][i];
        }
        cout<<endl;
    }
    cout<<endl;

    for(int i=0;i<10;i++)
    {
        for(int j=0;j<11;j++)
        {
            if((int)mat2[j][i]==(int)mat[j][i])
            {
                if((int)mat2[j][i]==42)
                {
                    if(flg)
                    {
                        salida[0][0]=j;
                        salida[0][1]=i;
                        flg=false;
                        flg2=true;
                    }
                   if(flg2)
                    salida[1][0]=salida[1][0]+1;

                }
            }
            if((int)mat2[j][i+1]==(int)mat[j][i+1])
            {
                if((int)mat2[j][i]==42)
                {
                    salida[1][1]=salida[1][1]+1;

                }
            }

        }
        if(flg2)flg2=false;

    }



}
