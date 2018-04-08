//http://mathworld.wolfram.com/PiFormulas.html


#include <iostream>
#include <limits>
#include <cmath>
#include "windows.h"
#include <iomanip>

double method_12(int termos){
  double pi=0.0,aux=0.0;
  double sinal = 1.0;
  for (size_t i = 1; i < termos; i++) {

    aux += sinal/((2*i)*(2*i+1)*(2*i+2));
    sinal = -sinal;
  }
  pi = aux*4.0+3.0;
  return pi;
}


double method_14(int termos){
  double pi=0.0,aux=0.0;
  for (size_t i = 1; i < termos; i++) {
    aux += 1.0/pow(i,2);
  }
  pi = sqrt(aux*6.0);
  return pi;
}


double method_16(int termos){
  double pi=0.0,aux=0.0;
  for (size_t i = 1; i < termos; i++) {
    aux += 1.0/pow(2*i-1,2);
  }
  pi = sqrt(aux*8.0);
  return pi;
}


int main(int argc, char const *argv[]) {
  std::cout << std::setprecision(30)<< method_16(100) << '\n'; // mais q 10000 comça a estourar

  return 0;
}
