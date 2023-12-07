// Reto propuesta por IA.
// Descripción: Solicite al usuario ingresar un número entero positivo n y luego imprima la suma de todos los números pares desde 1 hasta n.
// Ejemplo: si el usuario ingresa 6, el programa debe imprimir 12, que es la suma de 2 + 4 + 6.
// Fecha: 07/12/2023
// Autor: Alejandro M.L. (Q)

#include <iostream>

int main() {
  int numero, suma = 0;
  std::cout << "Ingrese un numero entero positivo: ";
  std::cin >> numero;
  for (int i = 0; i <= numero; i++) {
    if (i % 2 == 0) {
        suma += i;
    }
  }
  std::cout << "El resultado es: " << suma << std::endl;
}

