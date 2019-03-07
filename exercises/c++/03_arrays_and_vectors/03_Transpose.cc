// Exercises - session 03
// Matrix transpose


#include <iostream>
#include <iomanip>
#include <array>



template <std::size_t N>
void transpose (std::array<double,N>& matrix, int nrow, int ncol, std::array<double,N>& newmatrix){

  for (auto j = 0; j < ncol; j++) {
    for (auto i = 0; i < nrow; i++)
      newmatrix [j*nrow + i] = matrix[ncol*i + j];
  }
}


template <std::size_t N>
void print_dm (std::array<double,N>& matrix , int nrow, int ncol){
  for (int i=0; i<nrow; i++){
    for (int j=0; j<ncol; j++)
      std::cout << std::setw(3) << matrix[i * ncol + j] << " ";
    std::cout << std::endl;
  }
}


int main(){

  std::array<double,9> m_square {0,1,2,10,11,12,20,21,22};
  print_dm (m_square, 3, 3);
  std::cout << std::endl;
  
  std::array<double,9> m_transposed;
  transpose (m_square, 3, 3, m_transposed);
  print_dm (m_transposed, 3, 3);
  std::cout << std::endl;
  
  
  std::array<double,8> m_rectangular {1,2,3,4,5,6,7,8};
  print_dm (m_rectangular, 2, 4);
  std::cout << std::endl;
  
  std::array<double,8> m_transposed2;
  transpose (m_rectangular, 2, 4, m_transposed2);
  print_dm (m_transposed2, 4, 2);
  std::cout << std::endl;

  return 0;
  
 }
