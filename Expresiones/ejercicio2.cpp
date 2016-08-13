/*
Escribe un programa que resuelva la siguiente expresion:
(a+(b/(c-d))
*/

#include<iostream>
using namespace std;

int main(){

  float a, b, c, d, resultado = 0;

  cout<<"Escribe el valor de a:";

  cin>>a;

  cout<<"\nEscribe el valor de b:";

  cin>>b;

  cout<<"\nEscribe el valor de c:";

  cin>>c;

  cout<<"\nEscribe el valor de d:";

  cin>>d;

  resultado = (a+(b/(c-d)));

  cout<<"El resultado es:"<<resultado<<endl;

  return 0;
}
