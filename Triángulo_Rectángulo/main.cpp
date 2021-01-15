#include <iostream>
#include<math.h>
using namespace std;

int main() {
  float l1,l2,l3,hip,cat1,cat2,resultado,area=0,op;

      // cargar datos
  cout<< "Ingrese el lado 1: ";
  cin>> l1;
  cout<< "Ingrese el lado 2: ";
  cin>> l2;
  cout<< "Ingrese el lado 3: ";
  cin>> l3;

    // encontrar la hipotenusa (mayor lado)
  if (l1>l2)
  {
    cat1=l2;
    if (l1>l3)
    {
      hip = l1;
      cat2 = l3;
    }
     else
      {
      hip=l3;
      cat2=l1;
      }
  }

  else
  {
    cat1=l1;
    if (l2>l3)
    {
      hip=l2;
      cat2=l3;
    }

    else
    {
      hip=l3;
      cat2=l2;
    }
  }
  op = pow(hip,2);
  resultado =pow(cat1,2)+pow(cat2,2);

  if (op==resultado)
  {
    area=(cat1*cat2)/2;
    cout<< "El area es: "<<area;
  }

  else
    cout<< "No es un triangulo rectangulo.";

}
