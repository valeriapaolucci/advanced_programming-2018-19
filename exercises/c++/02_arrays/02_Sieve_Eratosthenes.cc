// Exercises - session 02
// Sieve of Eratosthenes


#include <iostream>
#include <cmath>   //std::sqrt()


int main(){

   int N;
   std::cout << "Enter a number N:" << std::endl;
   std::cin >> N;
   int max{int(std::sqrt(N))};
   //std::cout << max_divisor << std::endl;

   
   std::cout << 2 <<"\t";
   
   for(int n{3}; n <= N; ++n){

     //auto comp = std::min(n, max_divisor);

     for (int c{2}; c<=max; ++c){
      if ( n%c==0 )
	break;
      if ( c==max ){
	std::cout << n <<"\t";
      }
     }
   }
   std::cout << std::endl;

   return 0;
  
 }
