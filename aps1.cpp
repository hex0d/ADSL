
#include <stdio.h>
#include <math.h>
#include <iostream>

// Fatorial
unsigned long long fat(int n){
	unsigned long long fat = 1;
	while (n)
	{
		fat *= n;
		n--;
	}

	return fat;
}

/***************************************************************************************************************
****************************************************************************************************************
************************************************ Cálculo de e **************************************************
****************************************************************************************************************
***************************************************************************************************************/
// e = 2,718281828459045235360287


// Pelo limite exponencial
double limiteExponencial(int n){
	double e = pow(1 + 1.0/n, n);
	return e;
}

//-------------------------------------------------------------------------------

//Pelo série de taylor para x = 1


double serieTaylor(int termos){
	double e = 0;
	for (int i = 0; i <= termos; i++)
	{
		unsigned long long f = fat(i);
		if (f > 0)
			e += 1.0/f;
		else break;
	}
	return e;
}

//-------------------------------------------------------------------------------

double serie_infinita_tp1(int termos){ // fatorial dá overflow
	double e = 0;
	for (int i = 0; i <= termos; i++){
		unsigned long long f = fat(i);
		if (f > 0){
			e += pow((-1.0),i)/f;

		}
		else break;
	}
	return 1.0/e;
}





//-------------------------------------------------------------------------------

double serie_infinita_tp2(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 0; i <= termos; i++){
		unsigned long long f = fat(2*i);
		if (f > 0){
			e += ((1.0-2.0*i)/f);
		}
		else break;
	}
	return 1.0/e;
}

//-------------------------------------------------------------------------------

double serie_infinita_tp3(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 0; i <= termos; i++){
		unsigned long long f = fat(i);
		if (f > 0){
			e += (i+1.0)/f;
		}
		else break;
	}
	return e/2;
}



//-------------------------------------------------------------------------------


double serie_infinita_tp4(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 0; i <= termos; i++){
		unsigned long long f = fat(i*2+1);
		if (f > 0){
			e += ((i+1.0)/f);
		}
		else break;
	}
	return e*2;
}



//-------------------------------------------------------------------------------

double serie_infinita_tp5(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 0; i <= termos; i++){
		unsigned long long f = fat(i*2+1);
		if (f > 0){
			e += ((3.0-(4.0*pow(i,2)))/f);
		}
		else break;
	}
	return e;
}



//-------------------------------------------------------------------------------


double serie_infinita_tp6(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 0; i <= termos; i++){
		unsigned long long f = fat(i*3);
		if (f > 0){
			e += ((pow(3*i,2)+1)/f);
		}
		else break;
	}
	return e;
}



//-------------------------------------------------------------------------------

double serie_infinita_tp7(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 1; i <= termos; i++){
		unsigned long long f = fat(i-1);
		if (f > 0){
			e += ((i)/(2.0*f));
		}
		else break;
	}
	return e;
}



//-------------------------------------------------------------------------------


double serie_infinita_tp8(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 1; i <= termos; i++){
		unsigned long long f = fat(i);
		if (f > 0){
			e += ((pow(i,2)/(2.0*f)));
		}
		else break;
	}
	return e;
}



//-------------------------------------------------------------------------------


double serie_infinita_tp9(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 1; i <= termos; i++){
		unsigned long long f = fat(i);
		if (f > 0){
			e += ((pow(i,3)/(5.0*f)));
		}
		else break;
	}
	return e;
}



//-------------------------------------------------------------------------------


double serie_infinita_tp10(int termos){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;
	for (int i = 1; i <= termos; i++){
		unsigned long long f = fat(i);
		if (f > 0){
			e += ((pow(i,4)/(15.0*f)));
		}
		else break;
	}
	return e;
}



//-------------------------------------------------------------------------------

double limite_tp1(int n){ //porblema no fatorial que é 2x mais rapido pra crasha.
	double e = 0;

	return e;
}



//-------------------------------------------------------------------------------


/***************************************************************************************************************
****************************************************************************************************************
************************************************ Cálculo de pi *************************************************
****************************************************************************************************************
***************************************************************************************************************/
// pi = 3.141592653589793238462643


double pi_1915(){
	int sinal = 1;
	double pi = 0;
	double frac = 0;
	for (size_t i = 1;i<300000; i += 2 ) {
    frac = sinal*1.0/i;
    pi += frac;
    sinal *= -1;
    }
		return pi*4;
}
//-------------------------------------------------------------------------------

double pi_1933(){
	int sinal = 1;
	double pi = 0;
	double frac = 0;
	for (size_t i = 1;i<300000; i += 2 ) {
		int divisor = pow(i,2)*pow(i+1,2)*pow(i+2,2);
		frac = 1.0/divisor;
    pi += frac;
    //sinal *= -1;
    }
		double final_num = sqrt((((pi*16.0)+39.0)/4));
		return final_num;
}
//-------------------------------------------------------------------------------


// Série para pi / 4
double piSobre4(int termos){
	double pi = 0;

	for (int i = 1; i <= termos; i++)
		pi += 1.0/(2*i - 1) * pow(-1, i+1);
	return pi*4;
}

//-------------------------------------------------------------------------------

double newpi( int termos ){

		double pi = 4.0;
		for( int i = 0; i < termos; ++i )
		{
				pi += (i % 2 == 0 ? -4.0 : 4.0) / ( 3.0 + i * 2 );
		}
		return( pi );


}

//-------------------------------------------------------------------------------

// Série para pi com ln2
double piComLN(int termos){
	double soma = 1;
	int n = 1;
	for (int i = 1; i < termos; i++)
	{
		n +=3;
		soma += 1.0/n * pow(-1, i);
	}
	return (soma - 1.0/3.0*log(2)) * 9.0/sqrt(3);
}

//-------------------------------------------------------------------------------

// Série para pi quadrado por 6
double pi2Por6(int termos){
	double soma = 0;
	for (int i = 1; i <= termos; i++)
		soma += 1.0/i/i;
	return sqrt(soma*6.0);
}

//-------------------------------------------------------------------------------



/***************************************************************************************************************
****************************************************************************************************************
****************************************************************************************************************
****************************************************************************************************************
***************************************************************************************************************/



int main(){
	printf("Valor de e pelo limite exponencial (precisao limitada devido ao calculo do fatorial): %.20f\n", limiteExponencial(100));
	printf("Valor de e pela serie de Taylor:					%.20f\n", serieTaylor(100000000));
	printf("Valor de e por serie tp1:						%.20f\n", serie_infinita_tp1(999999)); //https://bit.ly/2EhPtbF seguindo desde o primeiro
	printf("Valor de e por serie tp2:						%.20f\n", serie_infinita_tp2(999999));
	printf("Valor de e por serie tp3:						%.20f\n", serie_infinita_tp3(999999));
	printf("Valor de e por serie tp4:						%.20f\n", serie_infinita_tp4(999999));
	printf("Valor de e por serie tp5:						%.20f\n", serie_infinita_tp5(999999));
	printf("Valor de e por serie tp6:						%.20f\n", serie_infinita_tp6(999999));
	printf("Valor de e por serie tp7:						%.20f\n", serie_infinita_tp7(999999));
	printf("Valor de e por serie tp8:						%.20f\n", serie_infinita_tp8(999999));
	printf("Valor de e por serie tp9:						%.20f\n", serie_infinita_tp9(999999));
	printf("Valor de e por serie tp10:						%.20f\n", serie_infinita_tp10(999999));



	printf("Valor de pi por serie para newpi:					%.20f\n", newpi(100000000));
	printf("Valor de pi por serie para pi/4:					%.20f\n", piSobre4(100000000));
	printf("Valor de pi por serie com ln2:						%.20f\n", piComLN(999999));
	printf("Valor de pi por serie com quadrado:					%.20f\n", pi2Por6(999999));
	printf("Valor de pi por serie para ex 19.15 300000 iteracoes:			%.20f\n", pi_1915());
	printf("Valor de pi por serie para ex 19.33 300000 iteracoes:			%.20f\n", pi_1933());



	return 0;
}
