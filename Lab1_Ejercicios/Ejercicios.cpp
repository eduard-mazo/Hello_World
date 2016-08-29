#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

using namespace std;
//PROTOTIPO
double d,u,z=0;
int a,e,i,b,t1,t4,j,j2,temp,temp2,count,count2,n=0;
char m;
char t5[]={};
double t2[]={},t3[]={},array1[]={};
int elevar(double, double);
//FUNCION PARA ELEVAR A N POTENCIA

int elevar(double B,double P)
{
    double res=1;
    for (double aa=0;aa<P;++aa)
        res*=B;

    return res;
}

// '@'  "default setting "
int main()
{

    cout<<"SELECCIONE EJERCICIOS "<<endl<<"-----------------"<<endl<<"#1  -- 14"<<endl;
    cout<<"#2  -- 3,4,5,6"<<endl<<"#3  -- 7,8,9,10,11,12,13"<<endl<<"#4  -- 15,16,17"<<endl;
    cout<<"#5  -- 18,19"<<endl<<"#6  -- 20,25"<<endl<<"#7  -- 21"<<endl;
    cout<<"#8  -- 22"<<endl<<"#9  -- 23"<<endl<<"#10 -- 24"<<endl;
    cout<<"#11 -- 26"<<endl<<"#12 -- 27"<<endl<<"#13 -- 28"<<endl;
    cout<<"#14 -- 29"<<endl<<"#15 -- 30"<<endl;
    cin>>temp;
    switch (temp){
    case 1:
        cout<<"EJERCICIO #14"<<endl;
        for(i=1;i<=50;i++)
        {
            cout<<i<<"***"<<(51-i)<<endl;
        }
        break;

    case 4:
        cout<<"EJERCICIO #15,#16,#17"<<endl;
        a=1;

        while(a!=0)
        {
            cin>>a;
            j=a;
            if(j>j2)j2=j;

            b+=a;
            i++;


        }
        cout<<b<<endl;
        cout<<"PROMEDIO "<<(b/--i)<<endl;
        cout<<"MAYOR "<<j2<<endl;
        break;

    case 5:
        cout<<"EJERCICIO #18,#19"<<endl;
        cin>>a;
        i=1;
        while((a/i)!=i)
        {
            i++;
            if(i>=a)break;
        }
        if(i>=a)cout<<"NO CUADRADO PERFECTO "<<endl;
        else cout<<"CUADRADO PERFECTO "<<endl;

        for(i=1;i<(a+1);i++){
            if(a%i==0){
                n++;

            }
        }
        if(n!=2){
            cout<<"No es Primo"<<endl;
        }else{
            cout<<"Si es Primo"<<endl;
        }
        break;
    case 6:
        cout<<"EJERCICIO #20,#25"<<endl;
        cout<<"Ingrese un Numero: ";
        cin>>n;
        //DETERMINO CIFRAS DEL NUMERO INGRESADO Y ALMACENO EN MEMORIA UNIDADES, DECENAS... ETC
        while(n!=0)
        {temp2=n;
            n /= 10;
            ++count;
            temp2%=10;
            array1[count]=temp2;

        }
        cout<<endl<<"NUMERO DE DIGITOS: "<<count<<endl;
        for(i=1;i<=count;++i)
        {if((array1[i])==array1[((count+1)-i)])
            {count2++;
                cout<<array1[i]<<" = "<<array1[((count+1)-i)]<<endl;}}
        if(count2==count)cout<<"PALINDROMO"<<endl;
        else cout<<"NO PALINDROMO"<<endl;
        break;

    case 7:
        cout<<"EJERCICIO #21"<<endl;
        cin>>m;
        a=m;
        if((a>=65)&&(a<=90))cout<<"to lower: "<<(m+=32)<<endl;
        if((a>=97)&&(a<=122))cout<<"TO UPPER: "<<(m-=32)<<endl;



        break;
    case 8:
        cout<<"EJERCICIO #22"<<endl;
        int t_seg, seg, min, hr;
        cout << "SEGUNDOS: ";
        cin >> t_seg;
        hr = t_seg/3600;
        min = (t_seg - hr*3600)/60;
        seg = (t_seg - 3600*hr - 60*min);
        cout << setfill('0');
        cout << t_seg << " = " << setw(2) << hr << ":" << setw(2) << min << ":" << setw(2) << seg << endl;

        break;

    case 9:

        cout<<"EJERCICIO #23"<<endl;
        cout<<"Primer #: ";
        cin>>a;
        cout<<"Segundo #: ";
        cin>>b;
        if(a>b)t1=a;
        else t1=b;

        while((t1%a!=0)||(t1%b!=0))
        {
            t1+=1;
        }
        cout<<t1<<endl;
        break;

    case 10:
        cout<<"EJERCICIO #24"<<endl;
        cout<<"DIMENSION DEL CUADRADO: ";
        cin>>a;
        for(i=0;i<=a;i++)
        {cout<<"+";}
        cout<<endl;
        for(j=2;j<a;j++)
        {
            for(i=1;i<=a;i++)
            {if((i==1)||(i==a))cout<<'+';
                cout<<" ";
            }
            cout<<endl;
        }
        for(i=0;i<=a;i++)
        {cout<<"+";}
        cout<<endl;


        break;

    case 11:

        cout<<"EJERCICIO #26"<<endl;
        cout<<"INGRESE primer #: ";
        cin>>t2[0];
        cout<<endl<<"INGRESE segundo #: ";
        cin>>t2[1];
        cout<<endl<<"INGRESE tercer #: ";
        cin>>t2[2];

        if(((t2[0]+t2[1])>t2[2])&&((t2[1]+t2[2])>t2[0])&&((t2[0]+t2[2])>t2[1])){
            if(((t2[0]==t2[1])||(t2[1]==t2[2])||(t2[2]==t2[0]))&&((t2[0]!=t2[1])||(t2[1]!=t2[2])||(t2[2]!=t2[0])))cout<<"ISOCELES"<<endl;

            if((t2[0]==t2[1])&&(t2[1]==t2[2]))cout<<"EQUILATERO"<<endl;

            if((t2[0]!=t2[1])&&(t2[1]!=t2[2])&&(t2[0]!=t2[2]))cout<<"ESCALENO"<<endl;
        }else cout<<"invalido"<<endl;


        break;

    case 12:

        cout<<"EJERCICIO #27"<<endl;
        cout<<"INGRESE primer #: ";
        cin>>a;
        cout<<endl<<"INGRESE operador: ";
        cin>>m;
        cout<<endl<<"INGRESE segundo #: ";
        cin>>b;
        e=m;
        switch (e) {
        case 43:
            b=a+b;
            cout<<b<<endl;

            break;
        case 45:
            b=a-b;
            cout<<b<<endl;
            break;
        case 42:
            b=a*b;
            cout<<b<<endl;
            break;
        case 47:
            b=a/b;
            cout<<b<<endl;
            break;

        default:
            break;
        }

        break;
    case 13:

        cout<<"EJERCICIO #28"<<endl;
        cin>>a;
        u=1;
        for(i=1;i<=a;i++){
            z=(double)(2*i-1);
            d+=((double)1/z)*u;
            u*=-1;
        }
        d*=4;
        cout<<"EL NUMERO PI APROX ES: "<<d<<endl;
        break;

    case 14:

        cout<<"EJERCICIO #29"<<endl;
        cout<<"ADIVINEMOS -----"<<endl;
        i = rand() % 100;

        cout<<"SU NUMERO ES: "<<i<<endl;
        cin>>m;
        e=m;

        while(!a){
            switch (e) {

            case 60:// <

                cout<<"MENOS -----"<<endl;
                switch (j) {
                case 0:
                    i-=10;
                    j2+=1;
                    break;
                case 1:
                    i-=5;
                    j2+=1;
                    break;
                case 2:
                    i-=2;
                    j2+=1;
                    break;
                default:
                    i-=1;
                    break;
                }
                e=10;
                break;
            case 61://=
                cout<<"ADIVINASTE -----"<<endl;
                e=10;
                a=1;
                break;
            case 62://>
                cout<<"MAS -----"<<endl;
                switch (j2) {
                case 0:
                    i+=10;
                    j+=1;
                    break;
                case 1:
                    i+=5;
                    j+=1;
                    break;
                case 2:
                    i+=2;
                    j+=1;
                    break;
                default:
                    i+=1;
                    break;
                }
                e=10;
                break;
            case 10:// nuevo intento
                cout<<"SU NUMERO ES: "<<i<<endl;
                cin>>m;
                e=m;
                break;

            }
        }
        break;

    case 15:

        cout<<"EJERCICIO #30"<<endl;
        cout<<"ADIVINEMOS -----"<<endl;
        i = rand() % 100;

        cout<<"INGRESE UN #: ";


        while(!a){
            cin>>e;
            if(e<i)cout<<endl<<"MAS ++++++";
            if(e>i)cout<<endl<<"MENOS ------";
            if(e==i)
            {cout<<endl<<"GANASTE!"<<endl;
                a=1;
            }
        }

        break;

    case 2:
        cout<<"EJERCICIOS #3,#4,#5,#6"<<endl;
        cout<<"INGRESE NUMERO A: ";

        cin>>a;
        cout<<"INGRESE NUMERO B: ";

        cin>>b;

        if(a>b)cout<<"EL # MAYOR: "<<a<<endl;
        if(a<b)cout<<"EL # MAYOR: "<<b<<endl;

        if(a<b)cout<<"EL # MENOR: "<<a<<endl;
        if(a>b)cout<<"EL # MENOR: "<<b<<endl;

        cout<<"A/B: "<<(a/b)<<endl;
        cout<<"A%B: "<<(a%b)<<endl;

        cout<<"A^B: "<<(elevar(a,b))<<endl;

        break;

    case 3:
        cout<<"EJERCICIOS #7,#8,#9,#10,#11,#12,#13"<<endl;
        cout<<"INGRESE UN #: ";
        cin>>a;
        t1=a;
        double c=1;
        const double pi=3.1416;
        for(i=1;i<=a;i++)
        {
            b+=i;
            c*=i;
        }


        i=1;
        while(t1*i<100)
        {
            t2[i]=t1*i;
            i++;
        }
        cout<<"SUMATORIA 0 A N: "<<b<<endl<<endl;
        cout<<"FACTORIAL N: "<<c<<endl<<endl;
        cout<<"AREA: "<<(pi*a*a)<<endl<<endl;
        cout<<"PERIMETRO: "<<(2*pi*a)<<endl<<endl;
        cout<<"MULTIPLOS: "<<endl<<endl;
        for(j=1;j<i;j++)
        {
            cout<<t2[j]<<endl;
        }

        cout<<endl<<"TABLA DE MULTIPLICAR: "<<endl<<endl;
        for(i=1;i<=10;i++)
        {//i*N=array
            t3[i]=i*a;
            cout<<i<<"*"<<a<<"="<<t3[i]<<endl;
        }

        cout<<endl<<"POTENCIAS N(1-5): "<<endl<<endl;
        for(i=1;i<=5;i++)
        {
            t3[i]=elevar(a,i);
            cout<<a<<"^"<<i<<"="<<t3[i]<<endl;
        }

        cout<<endl<<"DIVISORES: "<<endl<<endl;
        i=1;
        while(i<=a)
        {
            if(a%i==0)cout<<i<<endl;
            i++;
        }

        break;


    }
    return 0;
}
