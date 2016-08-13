/*
De los tres numeros que solicites determina cual de los 3 es mayor
*/
#include<iostream>
using namespace std;

int main(){

  int numero1, numero2, numero3;

  cout<<"Escribe un primer numero: ";

  cin>>numero1;

  cout<<"Escribe un segundo numero: ";

  cin>>numero2;

  cout<<"Escribe un tercer numero: ";

  cin>>numero3;
//Iguales
//Numero 1
  if (numero1 > numero2 and numero1 > numero3){
    cout<<"El primer numero es "<<numero1<<" y es mayor a los otros dos numeros "<<endl;
  } else if (numero2 > numero1 and numero2 >numero3){
        cout<<"El segundo numero es "<<numero2<<" y es mayor a los otros dos numeros "<<endl;
  }  else if (numero3 > numero1 and numero3 >numero2){
        cout<<"El tercer numero es "<<numero3<<" y es mayor a los otros dos numeros "<<endl;
  } else {
    cout<<"Ninguno de los 3 numeros es mayor a alguno de los tres";
  }

  return 0;
}
