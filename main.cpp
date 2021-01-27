#include <iostream>
using namespace std;

int main() {
  char lugar[80];
  float num_ins, distancia, num_conec, distancia_t=0;
  float aux=0, conec=0, conect_t=0;
  float macho, hembra,aux1=0;
  cout << "\n\t\t\t*** Electrocables ***\n";
  cout<< "\nIngrese el lugar de la instalación: ";
  cin>>lugar;
  cout<< "Ingrese el numero de puntos de red instalados: ";
  cin>>num_ins;
  for (int i=1; i<=num_ins;i++){
    cout<<"\n--- Punto de red #"<<i<<" ---";
    cout<<"\nIngrese la distancia entre el conector del punto de red hasta el equipo de conectividad: "<<endl;
    cin>> distancia;
    cout<<"Ingrese el numero de conectores para el punto de red: "<<endl;
    cin>>num_conec;

    conec = (num_conec * 2)+((num_conec * 2)*0.15);
    macho = (conec*0.15) + (conec*0.35);
    aux1 = aux1 + macho; 
    aux = distancia * num_conec;
    distancia_t = distancia_t + aux; 
    
  } 

  cout<<"\n==============================================\n";
  cout<<"\t\tDetalles de la instalacion"<<endl;
  cout<< "La distancia total del cable utilizado: "<<distancia_t+(distancia_t*0.05);
  cout<<"\nEl costo del cable segun la categoria 5e: "<<distancia_t*0.9;
  cout<<"\nEl precio total RJ45(Hembra y Macho) es: "<<aux1;
  cout<<"\nEl total del material utilizado: "<<(distancia_t*0.9)+ aux1;
  cout<<"\nLa ganancia es de: "<<((distancia_t*0.9)+ aux1)*0.45;
  cout<<"\nTotal a pagar: "<<(((distancia_t*0.9)+ aux1)*0.45)+((distancia_t*0.9)+ aux1);

  cout<<"\n==============================================\n";
}