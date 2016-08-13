/*
Encuentra el valor de la hipotenusa de un triangulo rectangulo, solicitando el valor de los dos catetos
*/

#include<iostream>
#include<math.h>//Libreria de funciones algebraicas y trigonometricas de C++
/*
sqrt es para sacar la raiz cuadrada.
pow (variable,cantidadDeElevacion) es para elvevar un numero a determinada potencia
*/
using namespace std;

int main(){

  float cateto1, cateto2, hipotenusa = 0;

  cout<<"Escribe el valor del primer cateto:";

  cin>>cateto1;

  cout<<"Escribe el valor del segundo cateto:";

  cin>>cateto2;

  hipotenusa = sqrt((pow(cateto1,2))+(pow(cateto2,2)));

  cout<<"El valor de la hipotenusa es:"<<hipotenusa<<endl;

  return 0;
}
