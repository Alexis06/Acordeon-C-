//Los comentarios son  solo de una linea
//Hace uso de librerias, al igual que en c, se usa #include para las librerias

#include<iostream>//Esta libreria permite la input y output de código

using namespace std; //Es una directiva se usa para una optimización de sintaxis.

int main(){//Esta es la función principal
  //cout es la función que nos permitira imprimir en pantalla
  //si no estubiera la directiva namespace std tendriamos que escribir lo que queremos imprimir de la siguiente forma:

  //std::cout << "Hola mundo" << std::endl;

  //pero usando la directiva queda así:

  cout << "Hello Wordl!" << endl;

  //endl: end line es igual a un salto de línea y támbien se puede usar \n

  return 0;//Es una buena práctica usar el return 0
}
