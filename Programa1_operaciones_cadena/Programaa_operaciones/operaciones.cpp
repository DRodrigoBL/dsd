#include <iostream>
#include <cmath>

int main(int argc, char const *argv[])
{
	
	long max = 100000000;

	double i = 0;
	double seno = 0;
	double coseno = 0;
	double tang = 0;;
	double logaritmo = 0;;
	double raiz = 0;;

	while(i<max)
	{
		seno += sin(i);
		coseno += cos(i);
		tang += tan(i);
		logaritmo += log10(i);
		raiz += sqrt(i);
		i++;
	}
	return 0;
}