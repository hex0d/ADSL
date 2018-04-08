
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

double chudnovsky_pi(int termos){
	double pi = 12.0;
	double aux = 0.0;
	int sinal = 1;

	for (size_t i = 0; i < termos; i++) {
		unsigned long long f = fat(i);
		unsigned long long g = fat (3*i);
		unsigned long long h = fat (6*i);
		if (f > 0 && g> 0 && h>0){
      aux += (sinal*h*(13591409+545140134*i))/(g*pow(f,3)*pow(640320.0,3*i+1.5));
			sinal = -sinal;
			std::cout << atan(13) << '\n';
 		}
		else break;
	}
	return pow(pi*aux,-1);
}
int main(int argc, char const *argv[]) {
	std::cout << std::setprecision(30)<< chudnovsky_pi(100000) << '\n';
	return 0;
}
