/*
Calcula la calificacion promediada de cuatro alumnos, con sus respectivas notas finales
*/

#include<iostream>
using namespace std;

int main(){

  float calificaion1, calificaion2, calificaion3, calificaion4, promedio4Alumnos;

  cout<<"Escribe la calificacion del primer alumno:";

  cin>>calificaion1;

  cout<<"\nEscribe la calificacion del segundo alumno:";

  cin>>calificaion2;

  cout<<"\nEscribe la calificacion del tercer alumno:";

  cin>>calificaion3;

  cout<<"\nEscribe la calificacion del cuarto alumno:";

  cin>>calificaion4;

  promedio4Alumnos = ((calificaion1 + calificaion2 + calificaion3 + calificaion4) /4);

  cout<<"\nEl resultado es:"<<promedio4Alumnos<<endl;

  return 0;
}
