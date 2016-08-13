/*
Haz un programa que resuelva una ecuación de segundo grado con la formula general:

b+- = raiz2 b2+4ac/2a
*/
#include<iostream>
#include<math.h>
using namespace std;

int main(){

  float a, b = 0, c, raizCuadrada, resultado1 = 0, resultado2 = 0;

  cout<<"Digita el valor de a:";

  cin>>a;

  cout<<"\nDigita el valor de b:";

  cin>>b;

  cout<<"\nDigita el valor de c:";

  cin>>c;

  raizCuadrada = sqrt( pow(b,2) - (4*a*c) );//raizCuadrada (-b2+4ac)

  resultado1 = ( (b+raizCuadrada) / (2*a) );

  resultado2 = ( -1*(b-raizCuadrada) / (2*a) );

  cout<<"\nEl resultado de x1="<<resultado1<<endl;

  cout<<"\nEl resultado de x2="<<resultado2<<endl;

  return 0;
}
