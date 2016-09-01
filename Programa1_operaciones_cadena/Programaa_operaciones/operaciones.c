#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	double i = 0;
	int max = 100000000;
	double seno = 0;
	double cose = 0;
	double tang = 0;
	double loga = 0;
	double raiz = 0;


	while(i<max){
		seno += sin(i);
		cose += cos(i);
		tang += tan(i);
		loga += log10(i);
		raiz += sqrt(i);
		i++;
	}

}