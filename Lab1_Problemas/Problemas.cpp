#include <iostream>
#include <iomanip>

using namespace std;
int fac(int);
int elevar(int, int);

long int x;
int temp,a,b,c,d,e,n,i,j,y,z,w,count,count2,min1,hor1,min2,hor2=0;
int arra[10]={50000,20000,10000,5000,2000,1000,500,200,100,50};
int arra2[20];
int arra3[20];
int arra4[20];

long int arra5[]={};
int main()
{cout<<"SELECCIONE EJERCICIOS "<<endl<<"-----------------"<<endl<<"#0  -- PROBLEMA #2"<<endl<<"#1  -- PROBLEMA #3"<<endl;
    cout<<"#2  -- PROBLEMA #4"<<endl<<"#3  -- PROBLEMA #5"<<endl<<"#4  -- PROBLEMA #6"<<endl;
    cout<<"#5  -- PROBLEMA #7"<<endl<<"#6  -- PROBLEMA #8"<<endl<<"#7  -- PROBLEMA #9"<<endl;
    cout<<"#8  -- PROBLEMA #10"<<endl;
    cin>>temp;

    switch(temp){
    case 0:
        cout<<"PROBLEMA #2"<<endl;
        cout<<"CUANTO DINERO TIENE: ";
        cin>>a;
        for(i=0;i<=9;i++){//Con ayuda de el ciclo for y un array, voy descartando los billetes
            if(a>=arra[i]){
                a-=arra[i];//si cumple la condicion resta el valor para poder continuar con la operacion
                arra2[i]++;
                i--;
                //cin.ignore().get(); //Pause Command for Linux Terminal
            }

        }

        for(i=0;i<=9;i++){
            cout<<arra[i]<<"-->"<<arra2[i]<<endl;// imprimo billetes y cantidad usada

        }
        cout<<"LO QUE RESTA: "<<a<<endl;

        break;

    case 1:
        cout<<"PROBLEMA #3"<<endl;
        cout<<"INGRESE UN MES: ";
        cin>>a;
        cout<<"INGRESE UN DIA: ";
        cin>>b;
        if(a<=12){
            if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12)){//Condicion para meses con 31 dias
                if(b>31)cout<<"FECHA INVALIDA "<<b<<"/"<<a<<endl;
                else cout<<"FECHA VALIDA "<<b<<"/"<<a<<endl;
            }
            if((a==2))
            {if(b>30)cout<<"FECHA INVALIDA "<<b<<"/"<<a<<endl;//Condicion para Febrero, bisiesto o no!
                if(b==29)cout<<"POSIBLE BISIESTO "<<b<<"/"<<a<<endl;
                else  cout<<"FECHA VALIDA "<<b<<"/"<<a<<endl;

            }

            if((a==4)||(a==6)||(a==9)||(a==11)){ // Condicion para meses de 30 dias
                if(b>30)cout<<"FECHA INVALIDA "<<b<<"/"<<a<<endl;
                else cout<<"FECHA VALIDA "<<b<<"/"<<a<<endl;
            }

        }else cout<<"FECHA INVALIDA "<<b<<"/"<<a<<endl;

        break;

    case 2:
        cout<<"PROBLEMA #4"<<endl;
        cout<<"HORA 1: ";
        cin>>a;
        if(a<999){count++;
            d=1;}

        while(a!=0)//Con el while obtenemos las unidades y podemos separa en cifras
        {
            c=a;
            a /= 10;

            c%=10;
            if(d)arra2[count-1]=c;
            else arra2[count]=c;
            count++;
        }

        cout<<endl<<"HORA 2: ";
        cin>>b;
        c=0;
        if(b<999){count2++;
            j=1;}
        while(b!=0)
        {
            c=b;
            b /= 10;
            c%=10;
            if(j)arra3[count2-1]=c;
            else arra3[count2]=c;
            count2++;
        }
        d=10;
        e=10;
        for(i=3;i>=0;i--){    // Ciclo For para convertir las horas ingresadas
            if(i>1)
            {
                arra4[i]=arra2[i];
                arra4[i]*=d;
                hor1+=arra4[i];
                d/=10;
            }
            else
            {
                arra4[i]=arra2[i];
                arra4[i]*=e;
                min1+=arra4[i];
                e/=10;
            }
        }
        d=10;
        e=10;
        cout<<endl<<hor1<<":"<<min1<<endl; // Imprimo Hora 1 con formato
        for(i=3;i>=0;i--){
            if(i>1)
            {
                arra4[i]=arra3[i];
                arra4[i]*=d;
                hor2+=arra4[i];
                d/=10;
            }
            else
            {
                arra4[i]=arra3[i];
                arra4[i]*=e;
                min2+=arra4[i];
                e/=10;
            }
        }
        cout<<endl<<hor2<<":"<<min2<<endl;// Imprimo Hora 2 con formato
        if((min1<=59)&&(min2<=59)){ // Condicion para saber si los minutos son correctos
            n=min1+min2;
            if(n>=1){//Condicion para saber si sumo hora o no 60>
                min1=n-60;
                z+=1;
            }else
            {
                min1=n;
            }

            y=hor1+hor2;

            if(y<24) // Siempre y cuando tenga una hora menor a 24
            {
                cout<<"LA HORA ES: "<<y<<":"<<min1<<endl;
                if(z!=0)y+=z;
            }
            else cout<<endl<<"HORA INCORRECTA"<<endl;


        }
        else cout<<endl<<"HORA INCORRECTA"<<endl;


        break;
    case 3:

        cout<<"PROBLEMA #5"<<endl;
        cout<<"PIRAMIDE"<<endl;

        cout<<"INGRESE UN # IMPAR: ";
        cin>>a;
        if((a%2)==0)cout<<endl<<"NUMERO IVALIDO (PAR)"<<endl;
        else {cout<<endl<<"NUMERO CORRECTO (IMPAR)"<<endl<<endl;

            a/=2;

            for (int i = 0; i <=a; i++) {//Ciclo for que imprime parte superior de la piramide

                for (int j = 0; j <(a-i); j++) {//rellena espacios en blanco para ubicar el puntero
                    cout << ' ';

                }

                for (int j = (a-i); j<=a+i ; j++) {//desde la ubicacion del puntero ingresa * para darle forma a la piramide
                    cout << "*";
                }


                cout << '\n';
            }
            for (int i = a-1; i >=0; i--) {// ciclo for que hace lo mismo que el anterior solo que en forma inversa

                for (int j = 0; j <(a-i); j++) {
                    cout << ' ';

                }

                for (int j = (a-i); j<=a+i ; j++) {
                    cout << "*";
                }


                cout<<endl;
            }
        }
        break;

    case 4:
        cout<<"PROBLEMA #6"<<endl;
        cout<<"NUMERO DE EULER"<<endl;
        cin>>a;
        for(j=1;j<a;j++)//Ciclo For que me permite desarrollar la Formula de E
        {
            x+=(double)1/fac(j);// En la suma llamo la Funcion Fac que me retorna el N!
        }
        x+=1;//Sumo 1 que corresponde a 1/0!
        cout<<endl<<"NUMERO DE EULER APROX: "<<x<<endl;
        break;

    case 5:
        cout<<"PROBLEMA #7"<<endl;
        cout<<"FIBONACCI   "<<endl;
        cout<<"INGRESE UN # N: "<<endl;
        cin>>a;
        arra5[0]=1;
        arra5[1]=1;

        for(x=1;x<=a;x++)// Ciclo For para encontrar la susecion de Fibonacci
        {
            arra5[x+1]=arra5[x-1]+arra5[x];
            if(arra5[x+1]<a)
            {
                if((arra5[x+1]%2)==0)// De la lista de Fibonacci encontrada descarto los que nos son PARES
                {
                    j=j+arra5[x+1];//Variable para sumar los pares

                    ;}
            }
            cout<<endl<<" "<<arra5[x+1];// Imprimo lista Fibonacci
        }
        cout<<endl<<"LA SUMA DE LOS PARES MENORES QUE N ES: "<<j<<endl;

        break;

    case 6:
        cout<<"PROBLEMA #8"<<endl;
        cout<<"SUMA DE MULTIPLOS A y B MENORES QUE C "<<endl;
        cout<<"INGRESE A: ";
        cin>>a;
        cout<<endl<<"INGRESE B: ";
        cin>>b;
        cout<<endl<<"INGRESE C: ";
        cin>>c;
        n=1;

        while(a*n<c)//Encuentro multiplos de A
        {
            arra2[n]=a*n;
            n++;
        }
        e=1;
        while(b*e<c)//Encuentro multiplos de B
        {
            arra3[e]=b*e;
            e++;
        }

        if(n>e)j=n; //Cual de los dos tiene mayor cantidad de elementos
        else j=e;

        for(i=1;i<j;i++) // Ciclo For para buscar multiplos comunos y descartarlos
        {    arra4[i]=arra2[i];

            for(d=1;d<j;d++){

                if(arra4[i]==arra3[d])arra3[d]=0;


            }
        }
        for(i=1;i<n;i++)// imprimo multimos de A con el formato respectivo
        {if(arra2[i]!=0)cout<<arra2[i]<<"+";
            x+=arra2[i];// Sumo multiplos A
        }

        for(i=1;i<e;i++)// imprimo multimos de B con el formato respectivo
        {
            if(arra3[i]!=0)cout<<arra3[i]<<"+";
            x+=arra3[i];// Sumo multiplos B
        }
        cout<<'\b'; // Borro un + que me queda sobrando


        cout<<"="<<x<<endl; // Imprimo resultado de la suma
        break;
    case 7:
        cout<<"PROBLEMA #9"<<endl;
        cout<<"SUMA DE NUMEROS A SU POTENCIA"<<endl;
        cout<<"Ingrese un Numero: ";
        cin>>n;
        //DETERMINO CIFRAS DEL NUMERO INGRESADO Y ALMACENO EN MEMORIA UNIDADES, DECENAS... ETC
        while(n!=0)
        {temp=n;
            n /= 10;
            ++count;
            temp%=10;
            arra5[count]=temp;

        }
        //SUMO CADA NUMERO ELEVADO A SU RESPECTIVA POTENCIA
        for(i=count;i>0;i--)
        {
            y=y+elevar(arra5[i],arra5[i]);


        }
        //IMPRIMO EN PANTALLA
        cout<<"-------------------"<<endl;
        cout<<"---RESULTADO: "<<y<<"---"<<endl;
        cout<<"-------------------"<<endl;

        break;

    case 8:
        cout<<"PROBLEMA #10"<<endl;
        cout<<"ENESIMO PRIMO"<<endl;
        cout<<"INGRESE UN #: ";
        cin>>a;
        c=1;
        while(!b)
        {
            for(i=1;i<(c+1);i++){
                if(c%i==0)
                    n++;
            }

            if(n==2)a--;// Disminuye contador cuando es primo
            e=c;//alamceno el Primo hayado
            n=0;//Restauro contador
            c+=1;
            if(a==0)b=1;//termina programa cuando encuentra el Nsimo Primo

        }
        cout<<endl<<"ENESIMO # PRIMO: "<<e<<endl;
        break;

    case 9:
        cout<<"PROBLEMA #11"<<endl;
        cout<<"ENESIMO PRIMO"<<endl;

        break;

    }


}

int elevar(int B,int P)// Funcion para elevar B^P
{
    int res=1;
    for (int a=0;a<P;++a)
        res*=B;

    return res;
}

int fac(int m)// Funcion que me retorna el Factorial del numero solicitado
{n=1;
    for(i=1;i<=m;i++)
    {
        n*=i;
    }

    return n;
}
