#include <iostream>
#include <limits>
#include <cmath>
#include "windows.h"
#include <iomanip>

unsigned long long fat(int n){
 unsigned long long fat = 1;
 while (n)
 {
   fat *= n;
   n--;
 }

 return fat;
}

double newt_euler_pi(int termos){
 double pi = 0.0;
 double aux = 0.0 ;
 for (int i = 0; i < termos; i++){
   unsigned long long f = fat(i);
   unsigned long long g = fat(2*i+1);
   unsigned long long h = fat(g);

     aux += (double)f/h;
     std::cout << aux << '\n';

   //else break;
 }
 return pi;
}

int main(int argc, char const *argv[]) {
  std::cout << std::setprecision(30)<< newt_euler_pi(100000) << '\n';
  return 0;
}
