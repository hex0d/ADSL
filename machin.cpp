// Machins {\frac {\pi }{4}}=4\arctan {\frac {1}{5}}-\arctan {\frac {1}{239}}

#include <iostream>
#include <limits>
#include <cmath>
#include "windows.h"
#include <iomanip>

double machin(){
  double pi = 0.0;
  pi = 4.0*atan(1.0/5)-atan(1.0/239);
  pi *=4.0;
  return pi;
}

double machin_like1(){
  double pi = 0.0;
  pi = 6*atan(1.0/8)+2*atan(1.0/57)+atan(1.0/239);
  pi *=4.0;
  return pi;
}

double machin_like2(){
  double pi = 0.0;
  pi = 12*atan(1.0/18)-5*atan(1.0/239)+8*atan(1.0/57);
  pi *=4.0;
  return pi;
}

int main(int argc, char const *argv[]) {
  std::cout << std::setprecision(30)<< machin() << '\n';
  std::cout << std::setprecision(30)<< machin_like1() << '\n';
  std::cout << std::setprecision(30)<< machin_like2() << '\n';

  return 0;
}
