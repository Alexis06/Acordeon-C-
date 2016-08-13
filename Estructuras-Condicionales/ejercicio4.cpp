//Escribe 4 numeros y haz un seguimiento al ultimo numero, idesntifica si este coincide con alguno de los otros 3

#include<iostream>

int main(){

    int numero = 0,numero2 = 0,numero3 = 0,numero4 = 0;

    std::cout <<"Escribe un primer numero:" << std::endl;

    std::cin >>numero;

    std::cout <<"Escribe un segundo numero:" << std::endl;

    std::cin >>numero2;

    std::cout <<"Escribe un tercer numero:" << std::endl;

    std::cin >>numero3;

    std::cout <<"Escribe un cuarto numero:" << std::endl;

    std::cin >>numero4;

    if(numero4 == numero){
      std::cout << "El cuarto numero:: " << numero4 << " Es igual al primer numero:  " << numero << std::endl;
    } else if (numero4 == numero2){
            std::cout << "El cuarto numero: " << numero4 << " Es igual al segundo numero: " << numero2 << std::endl;
    } else if (numero4 == numero3){
            std::cout << "El cuarto numero: " << numero4 << " Es igual al tercer numero: " << numero3 << std::endl;
    } else{
      std::cout << "Ninguno de los tres primeros numeros coincide con el cuarto" << std::endl;
    }

    return 0;
}
