// Exercises - session 01
// Units of measure

#include <iostream>
#include <string>


void measure_converter(){

  std::string unit;
  double value1;
  double value2;
  
  std::cout << "Insert a unit of measure ('inch' or 'm') to convert from:" << std::endl;
  std::cin >> unit;

  if ( unit == "inch"){
    std::cout << "Insert a value (inch):" << std::endl;
    std::cin >> value1;
    value2 = value1*0.0254;
    std::cout << "Your input equals " << value2 << " m" <<std::endl;
  }
  else if ( unit == "m"){
    std::cout << "Insert a value (m):" << std::endl;
    std::cin >> value1;
    value2 = value1/0.0254;
    std::cout << "Your input equals " << value2 << " inches" <<std::endl;
  }
  else
    std::cout << "Invalid input provided" << std::endl;
}

int main(){

  measure_converter();
  
  return 0;
}
