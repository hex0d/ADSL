#include <iostream>
#include <limits>
#include <cmath>
#include "windows.h"
#include <iomanip>


double euler_pi(){
  double pi = 20*atan(1.0/7)+8*atan(3.0/79);
  return pi;
}

int main(int argc, char const *argv[]) {
  std::cout << std::setprecision(30)<< euler_pi() << '\n';
  return 0;
}
