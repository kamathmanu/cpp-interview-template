#include "header.h"
#include <cmath>
#include <iostream>
int main() {
  std::cout << "Hello World!\n";
  IncludeTest tst;
  std::cout << tst.message << std::endl;
  std::cout << std::sqrt(1024.0) << std::endl;
  std::cout << tst.id(55) << std::endl;
  return 0;
}