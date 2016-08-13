//Tipos de Datos
//Las variables se declaran igual que en c, especificando el tipo de dato.
#include<iostream>

using namespace std;

int main(){

  int entero = 16; //Valores enteros
  float flotante = 16.7; //Valores decimales, cantidades pequeñas
  double doble = 16.7999763; //Valores decimales, cantidades grandes
  char letras = 'A'; //Valores con letras y solo letras
  /*
  Variables char:
  Al agregar [] a la variable puedes definir la capacidad de almacenamiento de caracteres, ejemplo:
  char letras[10] = "Alexis";
  */


  cout<< entero <<endl;
  cout<< flotante <<endl;
  cout<< doble <<endl;
  cout<< letras <<endl;
  return 0;
}
