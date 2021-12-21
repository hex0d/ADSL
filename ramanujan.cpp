#include <iostream>
#include <limits>
#include <cmath>
#include "windows.h"
#include <iomanip>


 //Srinivasa Ramanujan

 unsigned long long fat(int n){
 	unsigned long long fat = 1;
 	while (n)
 	{
 		fat *= n;
 		n--;
 	}

 	return fat;
 }
//editar
double ramanujan_pi(int termos){
 	double pi = 2.0*sqrt(2)/9801.0;
  double aux = 0.0 ;
 	for (int i = 0; i <= termos; i++){
 		unsigned long long f = fat(i);
    unsigned long long g = fat (4*i);
 		if (f > 0 && g> 0){
      aux += (g*(1103.0 + 26390.0*i))/(pow(f,4)*pow(396.0,4*i));

 		}
 		else break;
 	}
  return pow((pi*aux),-1);
 }

 int main(int argc, char const *argv[]) {
   std::cout << std::setprecision(30)<< ramanujan_pi(10) << '\n';
   return 0;
 }
