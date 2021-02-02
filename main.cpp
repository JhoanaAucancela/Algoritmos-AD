#include <iostream>
#include <fstream>
using namespace std;

void ingresar(string nombrearchivo);
void lectura(string nombrearchivo);

int main() {
  int op;
  ofstream archivo;
  string nombrearchivo;
 do{
    cout<<"============================";
  cout<<"\n\t\t\tMenu\n";
  cout<<"1. Ingresar datos\n2. Mostrar datos\n3. Salir\n";
  cout<<"============================";
  cout<<"\nIngrese la opcion: ";
  cin>>op;
  cin.ignore();


  switch(op){
    case 1:  
    {
    cout<<"Ingrese el nombre del archivo: ";
    getline(cin,nombrearchivo);
    ingresar(nombrearchivo);
    }
    break;
    case 2: {
      lectura(nombrearchivo);
    }
    
    break;
    case 3: 
    break;
  }
 }while(op!=3);
}

void ingresar(string nombrearchivo){
  string nombre;
  string apellido;
  string carrera;
  ofstream archivo;
  int edad;
  char r;
  archivo.open(nombrearchivo.c_str(), ios::out);
  do{
    cout<<"\t Ingrese el nombre: ";
    getline(cin,nombre);
    cout<<"\t Ingrese el apellido: ";
    getline(cin,apellido);
    cout<<"\t Ingrese el carrera: ";
    getline(cin,carrera);
    cout<<"\t Ingrese la edad: ";
    cin>>edad;
    archivo<<nombre<<" "<<apellido<<" "<<carrera<<" "<<edad<<endl;
    cout<<"Desea ingresar otro contacto s/n: ";
    cin>>r;
    cin.ignore();
  }while(r=='s' or r=='S');
}

void lectura(string nombrearchivo)
{
  string nombre;
  string apellido;
  string carrera;
  int edad;
  ifstream archivolecura;
  archivolecura.open(nombrearchivo.c_str(), ios::in);
  
  string texto;
  if(archivolecura.fail()){
   cout<<"El archivo no se pudo leer";
 }
 else{
   while(!archivolecura.eof()){
    archivolecura>>nombre>>apellido>>carrera>>edad;
  if(!archivolecura.eof())
     {
     cout<<"\n**********************************\n";
     cout<<"Nombre: "<<nombre<<endl;
     cout<<"Apellido: "<<apellido<<endl;
     cout<<"Carrera: "<<carrera<<endl;
     cout<<"Edad: "<<edad<<endl;
     }
   }
 }
 archivolecura.close();
}