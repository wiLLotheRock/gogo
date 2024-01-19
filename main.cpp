#include<bits/stdc++.h>

using namespace std;
#include "ordenamiento.h"


int main(){
    int A[100];
    int n;
    cout<<"Ingresa el total de datos a ingresar: ";
    cin>>n;
    cout<<"Ingresa los datos: ";
    for(int i = 0; i < n; i++){
        cin>>A[i];       
    }

    //intercambio directo por derecha    
    InterDirDer<int> objDDD;
    //objDDD.Ordena(A,n);

    //intercambio directo por izquierda
    InterDirIz<int> objIDD;
    //objIDD.Ordena(A,n);

    //intercambio por seleccion directa
    selecdir<int> objSD;
    //objSD.Ordena(A,n);

    //shell sort
    ShellSort<int> objSS;
    //objSS.Ordena(A,n);

    //quick sort
    QuickSort<int> objQS;
    objQS.Ordena(A,n);

    cout<<"\nDatos ordenados"<<endl;
    for(int i = 0; i < n; i++){
        cout<<A[i]<<" "; 
    }
    return 0;
}