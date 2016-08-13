/*
Haz un menu que realice las siguientes acciones:
Cubo de un numero
Numero par o impar
Salir
*/
//\t es para darle sangria al texto
#include<iostream>

#include<math.h>

int main(){

  int opcion,elevarNumero,numero;

  std::cout << "\tMenu Principal" << std::endl;

  std::cout << "\tTienes las siguientes opciones:" << std::endl;

  std::cout << "\tPresiona 1 si quieres elevar un numero al cubo." << std::endl;

  std::cout << "\tPresiona 2 si quieres ver si un numero es par o inpar." << std::endl;

  std::cout << "\tPresiona 3 si quieres salir." << std::endl;

  std::cout << "\tIngrese el numero de la opcion que quieres realizar: ";

  std::cin >> opcion;

  switch (opcion){

              case 1:

              std::cout << "Escribe el numero que deseas elevar al cubo" << std::endl;

              std::cin >> elevarNumero;

              elevarNumero = pow(elevarNumero,3);

              std::cout << "El resultado es: " << elevarNumero << std::endl;

              break;

              case 2:

              std::cout << "Escribe el numero del que deseas saber si es impar o par" << std::endl;

              std::cin >> numero;

              if (numero % 2 == 0){
              std::cout << "El numero: " << numero << " es par" << std::endl;
              } else {
                std::cout << "El numero: " << numero << " es impar" << std::endl;
              }

              break;

              case 3:

              break;
  }







      return 0;
}
