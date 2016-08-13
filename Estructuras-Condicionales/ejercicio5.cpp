//Convertir numeros arabigos a romanos, es numero debe de ser menor a 4000
/*
M=1000
D=500
C=100
L=50
X=10
V=5
I=1
Para obtener el resultado se tiene que descomponer el numero en unidades, decenas etc.
*/
#include<iostream>

int main(){

      int numero, unidades,decenas,centenas, millares;

      std::cout << "Escribe el numero que quieres convertir a numeros romanos: ";

      std::cin >> numero;

      unidades = numero % 10;//Se % el numero entre 10 y obtenemos las unidades
      numero /= 10;//Se divide el numero entre 10 para obtener el valor sin las unidades
      decenas = numero % 10;
      numero /= 10;
      centenas = numero % 10;
      numero /= 10;
      millares = numero % 10;
      numero /= 10;

      switch (millares){
        case 1: std::cout <<"M";//En caso de que solo sea un millar escribir esto
        break;
        case 2: std::cout <<"MM";
        break;
        case 3: std::cout <<"MMM";
        break;
      }
      switch (centenas){
        case 1: std::cout << "C";
        break;
        case 2: std::cout << "CC";
        break;
        case 3: std::cout << "CCC";
        break;
        case 4: std::cout << "CD";
        break;
        case 5: std::cout << "D";
        break;
        case 6: std::cout << "DC";
        break;
        case 7: std::cout << "DCC";
        break;
        case 8: std::cout << "DCCC";
        break;
        case 9: std::cout << "CM";
        break;
      }
      switch (decenas){
        case 1: std::cout << "X";
        break;
        case 2: std::cout << "XX";
        break;
        case 3: std::cout << "XXX";
        break;
        case 4: std::cout << "XL";
        break;
        case 5: std::cout << "L";
        break;
        case 6: std::cout << "LX";
        break;
        case 7: std::cout << "LXX";
        break;
        case 8: std::cout << "LXXX";
        break;
        case 9: std::cout << "XC";
        break;
      }
      switch (unidades){
        case 1: std::cout << "I";
        break;
        case 2: std::cout << "II";
        break;
        case 3: std::cout << "III";
        break;
        case 4: std::cout << "IV";
        break;
        case 5: std::cout << "V";
        break;
        case 6: std::cout << "VI";
        break;
        case 7: std::cout << "VII";
        break;
        case 8: std::cout << "VIII";
        break;
        case 9: std::cout << "IX";
        break;
      }

      return 0;
}
