#include <stdio.h>

int main(void) {
  char op;
  char tipo[40];
  int na,ca, cantidadT_animales=0;
  float peso, pesoT=0,pesoT_animales=0;

  do{

  printf("\n\t************** MENU **************\n");
  printf("a. Mamiferos\nb. Reptiles\nc. Aves\nd. Número de animales y peso total ingresado\ne. Salir");
  printf("\n******************************************\n");
  printf("\nIngrese la opcion: ");
  scanf("%s", &op);

    switch(op){
    case 'a':
      printf("\n¿Cuantos mamiferos desea ingresar?\n");
      scanf("%d",&na);
      for(int i = 1; i<= na; i++){
        printf("\nMamifero %d",i);
        printf("\nTipo de animal:\n");
        scanf("%s", tipo);
        printf("Ingrese la cantidad de %ss:\n",tipo);
        scanf("%d", &ca);
        printf("Ingrese el peso de cada %s en kg:\n",tipo);
        scanf("%f", &peso);
        cantidadT_animales = cantidadT_animales + ca;
        pesoT = peso * ca;
        pesoT_animales = pesoT_animales + pesoT;
      }
      break;
    case 'b':
      printf("\n¿Cuantos reptiles desea ingresar?\n");
      scanf("%d",&na);
      for(int i = 1; i<= na; i++){
        printf("\nReptiles %d",i);
        printf("\nTipo de animal:\n");
        scanf("%s", tipo);
        printf("Ingrese la cantidad de %ss:\n",tipo);
        scanf("%d", &ca);
        printf("Ingrese el peso de cada %s en kg:\n",tipo);
        scanf("%f", &peso);
        cantidadT_animales = cantidadT_animales + ca;
        pesoT = peso * ca;
        pesoT_animales = pesoT_animales + pesoT;
      }
      break;
    case 'c':
      printf("\n¿Cuantos Aves desea ingresar?\n");
      scanf("%d",&na);
      for(int i = 1; i<= na; i++){
        printf("\nAves %d",i);
        printf("\nTipo de animal:\n");
        scanf("%s", tipo);
        printf("Ingrese la cantidad de %ss:\n",tipo);
        scanf("%d", &ca);
        printf("Ingrese el peso de cada %s en kg:\n",tipo);
        scanf("%f", &peso);
        cantidadT_animales = cantidadT_animales + ca;
        pesoT = peso * ca;
        pesoT_animales = pesoT_animales + pesoT;
        }
      break;
    case 'd':
      printf("\nEl numero total de los animales ingresados es: %d", cantidadT_animales);
      printf("\nEl peso total de los animales ingresados es: %.2f\n",pesoT_animales);
      break;

    case 'e':
      printf("ADIOS \n");
      break;

    default:
      printf("La opcion ingresada es incorrecta");
  }

  }while(op != 'e');
  return 0;
}
