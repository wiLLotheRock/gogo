#include<bits/stdc++.h>

using namespace std;

template<class T>
class Buscador{
    public:
        virtual int Busca(T *A,int n,int dato);
};

template<class T>
class SecuencialDes : public Buscador<T>{
    public: 
        int Busca(T *A,int n,int dato);
};

template <class T>
int SecuencialDes<T> :: Busca(T *A,int n,int dato){
    int pos=0;
    int i=0;
    while (i<=n && A[i]!=dato)
    {
        i++;
    }
    if (i <= n)
    {
        pos=i;
    }
    return pos;
}

int main()
{
    int A[100];
    int n;
    int dato;
    int pos;
    cout<<"Ingresa el total de datos a ingresar: ";
    cin>>n;
    cout<<"Ingresa los datos: ";
    for(int i = 0; i < n; i++){
        cin>>A[i];
        cout<<endl;       
    }
    cout<<"Ingrese el dato que quiere encontrar: ";
    cin>>dato;
    SecuencialDes<int> ObJSD;
    pos=ObJSD.Busca(A,n,dato);
    cout<<"la posicion es: "<<pos;
    return 0;
}