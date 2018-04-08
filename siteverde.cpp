// http://mathworld.wolfram.com/PiApproximations.html


#include <iostream>
#include <limits>
#include <cmath>
#include "windows.h"
#include <iomanip>


 //raiz de 9x^4-240x^2+1492
double kochanski_pi (){
  double pi = sqrt(((40.0/3)-sqrt(12)));
  return pi;
}

/*
Another approximation involving e is given by

 pi approx sqrt(4e-1),
(9)
which is good to 2 decimal digits (A. Povolotsky, pers. comm., Mar. 6, 2008).
*/

double approx(){
  double euler = std::exp(1.0);
  double pi = sqrt((4.0*euler)-1.0);
  return pi;
}


 int main(int argc, char const *argv[]) {



   std::cout << std::setprecision(30) <<kochanski_pi() << '\n';
   std::cout << std::setprecision(30) <<approx() << '\n';


   return 0;
 }
