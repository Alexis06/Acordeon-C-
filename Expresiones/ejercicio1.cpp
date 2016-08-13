/*
Nota:
cout.precision(numerosDespuesDeElPunto);
*/

/*
Escribe la siguiente expresion matematica:
(a+b)/(c+d)
*/

#include<iostream>
using namespace std;

int main(){

  float a, b, c, d, resultado = 0;

  cout<<"Escribe el valor de 'a':"<<endl;

  cin>>a;

  cout<<"Escribe el valor de 'b':"<<endl;

  cin>>b;

  cout<<"Escribe el valor de 'c':"<<endl;

  cin>>c;

  cout<<"Escribe el valor de 'd':";

  cin>>d;

  resultado = ((a+b)/(c+d));

  cout<<"El resultado es: "<<resultado<<endl;

  return 0;
}
