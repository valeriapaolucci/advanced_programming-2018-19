// Exercises - session 01
// uniq


#include <iostream>
#include <string>


int main()
{
  std::string previous_line {""};
  std::string current_line;
  int count{1};

  while(std::getline(std::cin, current_line)){

    if ( current_line == previous_line)
      count++;
    // not to print the "auxiliary" empty line
    else if ( previous_line != "" ){
      std::cout << count <<"\t" << previous_line <<std::endl;
      // The counter must be reset
      count = 1;
    }
    previous_line = current_line;
  }
  // to print the last line, otherwise left-out
  std::cout << count <<"\t" << previous_line <<std::endl;
  
  return 0;
}
