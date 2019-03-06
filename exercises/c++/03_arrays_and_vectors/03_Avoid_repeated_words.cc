// Exercises - session 03
// Avoid repeated words


#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

int main(){

  std::string word;
  std::vector<std::string> w_vector;

  std::cout << "Enter a list of words (press Enter to insert a new one, Ctrl+D to exit)" << std::endl;
  
  while (std::getline(std::cin, word))
    w_vector.push_back(word);
  
  // Sorting the array: std::unique removes only the consecutive duplicates! 
  std::sort(w_vector.begin(), w_vector.end());

  // std::unique returns a past-the-end iterator for the new logical end of the range.
  auto last = std::unique(w_vector.begin(), w_vector.end());
  w_vector.erase(last, w_vector.end());

  std::cout <<"\n\n\nPrinting the words without repetitions:\n\n";
  
  for (const auto x : w_vector)
    std::cout << x << "\n";
  std::cout << std::endl;

  return 0;

}
