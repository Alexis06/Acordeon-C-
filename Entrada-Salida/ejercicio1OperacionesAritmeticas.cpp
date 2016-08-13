//Escribe un programa que lea la entrada estandar de el precio de un producto y muestre la salida estandar del precio del producto más el IVA

#include <iostream>
using namespace std;

int main(){

  float precioProducto = 0, iva = .16, total = 0, operacion = 0;

  cout<<"Escribe el precio de tu producto:"<<endl;

  cin>>precioProducto;

  operacion = precioProducto*iva;

  total = precioProducto + operacion;

  cout<<"Tu producto tiene un valor de: "<<total;

  return 0;
}
