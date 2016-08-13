//Escribe un programa que identifique si el caracter ingresado es una Vocal minuscula o mayuscula y si es o no es una Vocal

#include<iostream>

int main(){

      char letra;

      std::cout << "Escribe una Vocal" << std::endl;

      std::cin >> letra;

      switch (letra) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': std::cout << "Es una Vocal Minuscula" << std::endl;
        break;

        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': std::cout << "Es una Vocal Mayuscula" << std::endl;
        break;

        default: std::cout << "No es una Vocal" << std::endl;
        break;

        return 0;

      }

      return 0;
}
