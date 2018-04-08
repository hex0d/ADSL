#include <iostream>
#include "math.h"
#include  <iomanip>

double viete_pi(int n) {
  double q=0.0, pi=2.0;
  for (int i=0; i<n; ++i) pi *= 2.0/(q=sqrt(2.0+q));
  return pi;
}

int main(int argc, char const *argv[]) {
  std::cout << std::setprecision(30)<< viete_pi(100) << '\n';
  return 0;
}
