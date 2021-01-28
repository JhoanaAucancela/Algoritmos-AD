#include <iostream>
#include <fstream>
using namespace std;

int main() {
  string nombre;
  string apellido;
  int edad;
  char r;
  ofstream archivoprueba;
  string nombrearchivo;
  cout<<"Ingrese el nombre del archivo: ";
  //cin>>nombrearchivo;
  //NO TOMA ENCUENTA EL ENTER
  getline(cin,nombrearchivo);
  archivoprueba.open(nombrearchivo.c_str(), ios::out);
  do{
    cout<<"\t Ingrese el nombre: ";
    getline(cin,nombre);
    cout<<"\t Ingrese el apellido: ";
    getline(cin,apellido);
    cout<<"\t Ingrese la edad: ";
    cin>>edad;
    archivoprueba<<nombre<<" "<<apellido<<" "<<edad<<endl;
    cout<<"Desea ingresar otro contacto: ";
    cin>>r;
    cin.ignore();

//getchar()
  }while(r=='s');
  archivoprueba.close();

  ///LECTURA
  ifstream archivolecura(nombrearchivo.c_str());
  string texto;
  if(archivolecura.fail()){
   cout<<"El archivo no se pudo leer";
 }
 else{
   while(!archivolecura.eof()){
    archivolecura>>nombre>>apellido>>edad;
  if(!archivolecura.eof())
     {
     cout<<"Nombre: "<<nombre<<endl;
     cout<<"Apellido: "<<apellido<<endl;
     cout<<"Edad: "<<edad<<endl;
     }
   }
 }
 archivolecura.close();

}