#include<iostream>
#include<conio.h>

using namespace std;

    void leerArreglo (int a[], int );
    void shell (int a[], int );
    void shellDescen(int a[], int );
    void mostrarArreglo (int a[], int );

int main(){
    int n;
    cout<<"Ingrese el numero de elementos de arreglo: ";
    cin>>n;
    int arreglo[n];
    leerArreglo(arreglo,n);
    shell(arreglo,n);
    cout<<"El arreglo ordenado de forma ascendente es:"<<endl;
    mostrarArreglo(arreglo,n);
    getch();

}

void leerArreglo (int a[], int n){
    int i;
    for(i=0;i<n;i++){
        cout<<"Ingrese el elemento "<<i+1<<" del arreglo: ";
        cin>>a[i];
    }
}

void shell(int a[], int n){
    int i,bandera,salto,aux;
    for(salto=n/2;salto>0;salto=salto/2)
    do{
        bandera=0;
        for(i=0;i<n-salto;i++)
        if(a[i]>a[i+salto]){
            aux=a[i];
            a[i]=a[i+salto];
            a[i+salto]=aux;
            bandera=1;
        }
    }while(bandera);
}

void shellDescen(int a[], int n){
    int i,bandera,salto,aux;
    for(salto=n/2;salto>0;salto=salto/2)
    do{
        bandera=0;
        for(i=0;i<n-salto;i++)
        if(a[i]<a[i+salto]){
            aux=a[i];
            a[i]=a[i+salto];
            a[i+salto]=aux;
            bandera=1;
        }
    }while(bandera);
}

void mostrarArreglo (int a[], int n){
    for(int i;i<n;i++)
        cout<<" "<<a[i];
}
