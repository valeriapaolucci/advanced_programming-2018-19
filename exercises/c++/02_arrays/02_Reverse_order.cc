// Exercises - session 02
// Reverse order


#include <iostream>

template <typename T>
T* init (int l){
  T* myarray{new T[l]};
  for (int k{0}; k<l; ++k){
    std::cout << "Insert the array element with index " <<k+1 <<":" <<std::endl;
    std::cin >> myarray[k];
  }
  return myarray;
}

template <typename T>
void reverse_print (T* p, int l){
  for (int k{l-1}; k>=0 ; --k)
    std::cout << p[k] << "\t";
  std::cout << std::endl;
}

int main (){

  int n;
  std::cout << "Insert the length of the array: " << std::endl;
  std::cin >> n;

  int* myarray_int {init<int>(n)};
  reverse_print (myarray_int, n);
  delete[] myarray_int;

  double* myarray_double {init<double>(n)};
  reverse_print (myarray_double, n);
  delete[] myarray_double;
	       

  return 0;
}
