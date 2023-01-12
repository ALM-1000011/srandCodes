/**
 * Author: AML
 * Brief: Check how passing by reference works, by filling a cup of tea
*/

#include <iostream>

struct Cup {
    bool is_full = false;
};

void FillingTheCup(Cup cup_of_tea) {
   cup_of_tea.is_full = true;
   return;
}

int main() {
  struct Cup empty_cup_of_tea;
  FillingTheCup(empty_cup_of_tea);
  if (empty_cup_of_tea.is_full == true) {
    std::cout << "The cup is full" << std::endl;
  } else {
    std::cout << "The cup is empty" << std::endl;
  }
  return 0;
}