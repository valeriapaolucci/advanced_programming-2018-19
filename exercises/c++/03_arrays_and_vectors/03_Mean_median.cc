// Exercises - session 03
// Mean and Median


#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>


double mean (std::vector<double>& v){

  double sum{0};
  
  for (const auto x : v)
    sum += x;

  return sum/v.size();
    
}

double median (std::vector<double>& v){

  std::sort(v.begin(), v.end());

  if (v.size() % 2)
    return (v[(v.size()-1)/2]);
  else
    return (v[(v.size()-1)/2] + v[v.size()/2])/2;
}

int main(){

  std::ifstream file("temperatures.txt");
  double value;
  std::vector<double> temperatures;

  while (file >> value)
    temperatures.push_back(value);

  
  //std::cout << temperatures.size() << std::endl;

  std::cout << "Mean is: " << mean(temperatures) << "\n" << "Median is: " << median(temperatures) << std::endl;

  return 0;

}
