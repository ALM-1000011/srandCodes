/**
 * @file grafo.cpp
 * @author Alejandro Melián Lemes (alu0101443126@ull.edu.es)
 * @brief Código consistente en la lectura del fichero de texto, el almacenamiento en una matriz
 * contenedora de objetos Nodos y la aplicación de la búsqueda de amplitud.
 * @version 0.1
 * @date 2022-10-15
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "nodo.h"
#include <vector>
#include <iostream>

int main(int argc, char* argv[]) {
  std::string grafoentr = argv[1];
  std::vector<Nodo> grafo;
  std::ifstream file(infile);
  float arista; 
  if (file.is_open()) {
    while (file >> arista) {
      if (roundf(arista) != arista) {
      Nodo filenodo{arista, }