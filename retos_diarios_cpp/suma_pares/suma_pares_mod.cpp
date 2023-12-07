// Reto propuesta por IA.
// Descripción: Solicite al usuario ingresar un número entero positivo n y luego imprima la suma de todos los números pares desde 1 hasta n.
// Ejemplo: si el usuario ingresa 6, el programa debe imprimir 12, que es la suma de 2 + 4 + 6.
// Modificación: Se debe sustituir el bucle for por un bucle while
// Fecha: 07/12/2023
// Autor: Alejandro M.L. (Q)

#include <iostream>

int main() {
  int numero, suma = 0, i = 0;
  std::cout << "Ingrese un numero entero positivo: ";
  std::cin >> numero;
  while (i <= numero) {
    if (i % 2 == 0) {
        suma += i;
    }
    i++;
  }
  std::cout << "El resultado es: " << suma << std::endl;
}