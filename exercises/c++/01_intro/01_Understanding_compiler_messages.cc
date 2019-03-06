// Exercises - session 01
// Undestanding compiler messages



// Correct version

#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl;
  return 0;
}


/*
// Typos in function name

#include <iostream>

int main() {
  std::c0ut << "Hello World!" << std::endl;
  return 0;
}



// Forgetting to put `;`

#include <iostream>

int main() {
  std::cout << "Hello World!" << std::endl
  return 0;
}



// Forgetting to `#include <iostream>`

int main() {
  std::cout << "Hello World!" << std::endl;
  return 0;
}



// Declaring a variable with illegal name like `int double {0};`

#include <iostream>

int double {0};

int main() {
  std::cout << "Hello World!\n" << double << std::endl;
  return 0;
}



// Passing a wrong type of argument to a function

#include <iostream>

int myfunc (int a){
  return a + 1;
}

int main() {
  std::cout << "Hello World!\n" << myfunc("Hello World!") << std::endl;
  return 0;
}

*/
