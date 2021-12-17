#include <iostream>
#include <cmath>
#include <cstring>
#include <conio.h>
using namespace std;
bool n_primo(int n){
        bool condicion;
        if(n!=1 and n!=0 ){
            for(int i=2;i<=n;i++){
                if(n%i==0){

                    if(n==i){
                        condicion=true;
                    }
                    else{
                        condicion=false;
                        return condicion;
                    }
                }

            }
        }
        else condicion = false;
              return condicion;

    }

int main()
{
   /* 1.programa vocal o consonante*/
    /* char letra=0;

    cout << "Bienvenido introdusca una letra por favor" << endl;
    cin>> letra;


           if (letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u')
              cout<<"la letra "<<letra<<" es una vocal"<<endl;
           if(letra=='b'||letra=='c'||letra=='d'||letra=='f'||letra=='g'||letra=='h'||letra=='i'||letra=='j'||letra=='k'||letra=='l'||letra=='m'||
          letra=='n'||letra=='p'||letra=='q'||letra=='r'||letra=='s'||letra=='t'||letra=='v'||letra=='w'||letra=='x'||letra=='y'||letra=='z')
              cout<<"la letra "<<letra<<" es una consonante"<<endl;
           else
              cout<<"Lo que se introduco no es una letra"<<endl;*/
    /* 3.mes dia
   int mes=0;
   int dia=0;
    cout<<"bienvenido introdusca mes: ";
    cin>>mes;
    cout<<"introdusca dia: ";
    cin>>dia;
    if(mes >=1 && mes<=12 and dia>=1 && dia<=31){
        cout<<"esta fecha: mes:"<<mes<<" /dia:"<<dia<<" es valida"<<endl;

    if (mes==2 and dia==29){
        cout<<"esta fecha: mes:"<<mes<<" /dia:"<<dia<<" es un posible ano bisiesto"<<endl;
    }
    }
    else{
        cout<<"esta fecha: mes:"<<mes<<" /dia:"<<dia<<" no es valida"<<endl;
    }*/// si se puede corregir el segundo if cambiar el cout poner el if y dar la opcion de imprimir una de las dos//

   /* 5. asteriscos
    int n,i,j,k;
    cout << " Bienvenido ingrese un numero impar : " ;
    cin >> n ;

    int r=n%2;
    int medio=0;
    if (r==1){
        for(i=1;n/2>=i;i++){
            for(j=n/2;j>=i;j--){
                cout<<' ';
            }
            for(k=1;(2*i)-1>=k;k++){
                cout<<'*';
            }
            cout<<endl;
        }
        for(i=(n/2)+1;0<i;i--){
            medio++;
            for (j=1;j<medio;j++){
                cout<<' ';
            }
            for(k=0;k<(2*i)-1;k++){
                cout<<'*';
            }
            cout<<endl;
        }
        cout<<'\n'<<endl;
        system("pause");
        return 0;
    }
    else{
        cout<<"no es un numero impar"<<endl;
    }*/

    /*7.serie de fibonagi
    int n=0,i=0,j=0,b=0;
    cout<<"Bienvenido ingrese un numero: ";
    cin>>n;

    for (i=1;j<n;){
        j=j+i;
        i=j-i;
        int r=j%2;

        if(r==1){
            cout<<"numero impar: "<<j<<endl;

        }
        if(r==0){
            cout<<"numero   par: "<<j<<endl;
            b+=j;

        }

    }
    cout<<b;*/

    /*9.suma de digitos
    int n=0;
    int s=0;

    cout<<"Bienvenido por favor digite un numero entero: "<<endl;
    cin>>n;
    while (n>0){
        s=s+(pow(n%10,(n%10)));
        n=n/10;

    }
    cout<<"la suma de los digitos elevado ellos mismos es igual a: "<<s<<endl;*/

    /* 11.mcm
    int n=0,i=0;
    char par[100]={};
    char impar3[100]={};
    char impar5[100]={};
    char impar7[100]={};
    cout<<"bienvenido por favor ingrese un numero entero"<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            char* i=i;
            strcpy(i,par);
        }
        if(i%2==1){
            if(i%3==0 and not (n%2==0)){
                char* i=i;
                strcpy(i,impar3);
            }
            if(i%5==0 and not(n%2==0)){
                char* i=i;
                strcpy(i,impar5);
            }
            if(i%7==0 and not(n%2==0)){
                char* i=i;
                strcpy(i,impar7);
            }
        }

    }
    cout<<"par: "<<par<<endl;
    cout<<"impar3: "<<impar3<<endl;
    cout<<"impar5: "<<impar5<<endl;
    cout<<"impar7: "<<impar7<<endl;*/

    /*numeros primos


    int n=0,i=0,suma=0;
    cout<<"bienvenido ingrese un numero entero";
    cin>>n;

    for(i=1;i<=n;i++){
        if(n_primo(i)){
        suma+=i;

    }


    }
    cout<<"la suma de los primos es: "<<suma<<endl;*/
    return 0;
}
