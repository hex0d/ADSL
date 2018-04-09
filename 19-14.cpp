#include <stdio.h>
#include <math.h>
#include <iostream>
#include "time.h"
#include <iomanip>

double f1914(){
  double e;
  double frac = 0;
  double frac_ant = 0;
  int sinal = 1;
  for (size_t i = 1;i<100000000; i++) {
    frac_ant = frac;
    frac = sinal*1.0/i;
    e += frac;
    sinal *= -1;
    if (frac == (frac_ant*(-1))){

      break;
    }
    if (i%100000000 == 0){
    }


  }
  return e;
}
int main(int argc, char const *argv[]) {
  clock_t tStart = clock();
  double e2 = f1914();
  double true_e = pow(2.0,(1.0/e2));
  std::cout << e2 << '\n';
  //std::cout << true_e << '\n';
  std::cout<<std::setprecision(30) << true_e << '\n';
  printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
  return 0;
}
