// Exercises - session 02
// Sieve of Eratosthenes


#include <iostream>


void sieve(int n){

  // Creating an array of bool named prime
  bool prime[n+1];

  // Initializing all entries as true
  for (auto i{0}; i<sizeof(prime); ++i)
    prime[i] = true;


  for (int m=2; m*m<=n; ++m){

    if (prime[m] == true){
      for (int i=m*2; i<=n; i += m)
	prime[i] = false; 
        } 
    }

  // Print all prime numbers
  for (int m=2; m<=n; ++m){
    if (prime[m]==true)
      std::cout << m << " ";
  }
  std::cout << std::endl;
} 


int main(){

   int n;
   std::cout << "Enter a number n:" << std::endl;
   std::cin >> n;

   sieve(n);

   return 0;
  
 }
