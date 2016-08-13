//El Bucle While

#include<iostream>
#include<conio.h>//Para que no se cierre el ejecutable

int main(){

    int i;//Inicializo la famosa variable i que se usa en todos los bucles

    i = 1;

    while(i >= 10){

    std::cout <<i << std::endl;

    i ++;
    }

    getch();//Termina el programa hasta que oprimamos una tecla
    return 0;
}
