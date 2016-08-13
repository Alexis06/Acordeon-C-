#include<iostream>
using namespace std;

int main(){

  int numero;

  cout<<"Escribe un numero: ";

  cin>>numero;

  if(numero < 100 and numero > 10){
    cout<<"El numero es mayor a 10 y menor que 100"<<endl;
  } else{
    cout<<"El numero es igual o menor a 10 y tambien es menor o igual a 100"<<endl;
  }

  return 0;
}
