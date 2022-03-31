//Autor: Alejandro M.L
//Fecha: 31/03/2022
//Hora: 6:37 a.m
#include <iostream>
#include <cstring>
using namespace std;

bool capicua(string cadena ) {
  int contador = 0;
  for (int i = 0, j = cadena.length() - 1; i < cadena.length(); i++, j--) {
    if (cadena[i] == cadena[j]) {
      contador++;
      }
    }
   if (contador == cadena.length()) {
     return true;
    }
   else {
     return false;
    }
}

int main() {
string cadena;
cin >> cadena;
if (capicua(cadena) == true) {
  cout << "Es capicua" << endl;
} else {
  cout << "No es capicua" << endl;
}
  return 0;
}
