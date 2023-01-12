/**
 * @file nodo.h
 * @author Alejandro M. L. (alu0101443126@ull.edu.es)
 * @brief Declaración de la clase Nodo, que es responsable de almacenar el coste 
 * y adicionalmente, el nodo adyacente. Por ende, la estructura de la clase sería:
 * Nodo = {costo, siguiente nodo}, donde siguiente nodo pudiera ser Null si no existe adyacencia.
 * @version 0.1
 * @date 2022-10-15
 * 
 * @copyright Alejandro M.L (c) 2022
 * 
 */

#pragma once
#include <iostream>

class Nodo {
  public:
  Nodo(int newcosto, int newnodo);
  private:
    float costo_;
    int nextnodo_;
}