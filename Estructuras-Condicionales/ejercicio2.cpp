//Comprobar si un numero es positivo o negativo

#include<iostream>
using namespace std;

int main(){

    float numero;

    cout<<"Escribe un numero: "<<endl;

    cin>>numero;

    if(numero >= 0){
      cout<<"El numero es positivo";
    } else{
      cout<<"El numero es negativo";
    }

  return 0;
}
