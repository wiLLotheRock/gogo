#include<bits/stdc++.h>

using namespace std;


template <class T>
class Ordenador{
    public:
        virtual void Ordena(T *A, int n) = 0;
        void Intercambia(T *A, int ind1, int ind2);
};


template <class T>
void Ordenador<T> :: Intercambia(T *A, int ind1, int ind2){
    T aux;
    aux = A[ind1];
    A[ind1] = A[ind2];
    A[ind2] = aux;
}

template <class T>
class InterDirDer : public Ordenador<T>{
    public:
        void Ordena(T *A, int n);
};

template <class T>
void InterDirDer<T> :: Ordena(T *A, int n){
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n-i; j++)
            if(A[j] > A[j+1])
                this->Intercambia(A,j,j+1);
}

template <class T>
class InterDirIz : public Ordenador<T>{
    public:
        void Ordena(T *A, int n);
};

template <class T>
void InterDirIz<T> :: Ordena(T *A, int n){
    for(int i = n-1; i >= 0; i--)
        for(int j = n-i; j > 0; j--)
            if(A[j] < A[j-1])
                this->Intercambia(A,j,j-1);
}

template <class T>
class selecdir : public Ordenador<T>{
    public:
        void Ordena(T *A, int n);
};

template <class T>
void selecdir<T> :: Ordena(T *A,int n){
    for(int i=0;i<n-1;i++)
    {
        int menor=A[i];
        int k=i;
        for(int j=i+1;j<n;j++)
        {
            if(menor>A[j])
            {
                menor=A[j];
                k=j;
            }
        }
        A[k]=A[i];
        A[i]=menor;
    }
}


int main(){
    int A[100];
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>A[i];
        cout<<endl;       
    }

    //intercambio directo por derecha    
    InterDirDer<int> objDDD;
    //objDDD.Ordena(A,n);

    //intercambio directo por izquierda
    InterDirIz<int> objIDD;
    //objIDD.Ordena(A,n);

    //seleccion directa
    selecdir<int> objSD;
    objSD.Ordena(A,n);

    cout<<"\nDatos ordenados"<<endl;
    for(int i = 0; i < n; i++){
        cout<<A[i]<<endl; 
    }
    return 0;
}