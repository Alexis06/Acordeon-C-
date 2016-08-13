#include<iostream>
using namespace std;

int main(){

  char numero;

  cout<<"Escribe un numero del 1 al 5: ";

  cin>>numero;

  switch (numero) {
    case 1:
    cout<<"El numero es 1"<<endl;
    break;
    case 2:
    cout<<"El numero es 2"<<endl;
    break;
    case 3:
    cout<<"El numero es 3"<<endl;
    break;
    case 4:
    cout<<"El numero es 4"<<endl;
    break;
    case 5:
    cout<<"El numero es 5"<<endl;
    break;
    default:
    cout<<"Es un numero"<<endl;
    break;
  }

  return 0;
}
