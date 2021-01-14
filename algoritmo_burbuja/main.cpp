#include <iostream>

using namespace std;

void ingresar (int a[],int n);
void ordenar (int a[],int n);
void imprimir (int a[],int n);

int aux;
int main()
{
   int arreglo1[5];


   ingresar(arreglo1,5);
   ordenar(arreglo1,5);
   imprimir(arreglo1,5);
    return 0;
}

void ingresar (int a[],int n)
{
    cout<<"Ingresar los elementos al arreglo"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cout<<"|"<<a[i]<<"|";
    }


}

void ordenar (int a[],int n)
{
    for(int i=0; i<n; i++)
    {

        for(int j=i+1; j<n;j++)
            {
          if(a[j]<a[i])
          {
            aux = a[i];

            a[i]=a[j];

            a[j]= aux;
          }
          }
        }
}

void imprimir (int a[],int n)
{
    for(int i=0;i<n;i++){
            cout<<"|"<<a[i]<<"|";
    }
}
