/*#include <iostream>
#include <limits>
#include <cmath>
#include "windows.h"
#include  <iomanip>




void madhava (long double realpi) { // método Madhava of Sangamagrama
  double argument=0.0;
  double comparison=0.0;
  double pi = sqrt(12.0); // começa com v12'
  for (int i = 0;; i++) {
    comparison = argument + (pow (-1.0/3,i))/(2.0*i+1);
    if (argument == comparison){
      break;
    }
    argument = comparison;
  }

  pi *= comparison;

  std::cout<<std::setprecision(30) << pi << '\n'; // printa valor de pi obtido com precisao de 30 casas.

  long double diff = realpi - pi;

  int i2=0;


  std::cout << diff << '\n'; // print a diferença dos 2

  for (size_t i = 0; (int)diff * 10 == 0; i++) {
    diff = diff*10;
    i2=i;
  }
  std::cout << i2 << '\n'; // numero de casas de precisão que acertou;
}



int main(int argc, char const *argv[]) {
  long double realpi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286; // usar numero real de pi para definir boa apriximação

  madhava(realpi);

}*/

#include <iostream>
#include <limits>
#include <cmath>
#include "windows.h"
#include  <iomanip>


int main()
{
    int nterms = 1000000 ; // accept from user


    double sum = 0.0 ;
    int numerator = -1 ;
    const int upper_bound = nterms * 2 ;

    for( int n = 1 ; n < upper_bound ; n += 2 ) // for each term upto nterms
    {
        numerator *= -1 ; // alernating +1, -1, +1, -1 ...
        const double term = numerator / double(n) ; // +1/1.0, -1/3.0, +1/5.0 ...
        sum += term ; // +1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ...
    }

    const double pi = 4 * sum ; // 4 * ( 1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ... )

    std::cout << "pi upto " << nterms << " terms: " <<std::setprecision(30) << pi << '\n' ;

}

double newpi( int termos ){
	double soma = 0.0 ;
	int inv = -1 ;
	const int max_iter = termos * 2 ;

	for( int n = 1 ; n < max_iter ; n += 2 ) // for each term upto nterms
	{
			inv *= -1 ; // alernating +1, -1, +1, -1 ...
			const double term = inv / double(n) ; // +1/1.0, -1/3.0, +1/5.0 ...
			soma += term ; // +1/1.0 + -1/3.0, + 1/5.0 + -1/7.0 ...
	}

	const double pi = 4 * sum ;

	return pi;

}
