// Exercises - session 02
// Prime numbers


#include <iostream>


int main(){

  // allocating one big array
  int primes[50]{};

  primes[0]=2;

  int count{1};

  for(int n{3}; n <= 100 ; ++n){

    for (int c{2}; c<n; ++c){
      if ( n%c==0 )
      // for sure it's not a prime number, so exit from loop
      break;
      if ( c==(n-1)){
	primes[count]=n;
	++count;
      }
    }
  }

  for (auto k{0}; primes[k]!=0; ++k)
    std::cout << primes[k] <<"\t";
  std::cout << std::endl;

  return 0;
  
 }
