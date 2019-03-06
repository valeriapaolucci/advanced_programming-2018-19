// Exercises - session 01
// Getters

#include <iostream>

int get_int (){

  int i;

  std::cout << "Insert an integer number:" << std::endl;
  // keep reading from stdin until a valid number is fed
  while (!(std::cin >> i)){	//comment
    std::cin.clear();
    std::cin.ignore();
  }
  return i;
}


double get_double (){

  double i;

  std::cout << "Insert a double number:" << std::endl;
  while (!(std::cin >> i)){
    std::cin.clear();
    std::cin.ignore();
  }
  return i;
}


int main(){

  int int_value = get_int();
  //double double_value = get_double();
  
  std::cout << "The integer number is " << int_value <<std::endl;
  //std::cout << "The double number is " << double_value << std::endl;

  return 0;
}
