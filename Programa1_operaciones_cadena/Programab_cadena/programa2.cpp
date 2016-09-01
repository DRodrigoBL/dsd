#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	

	srand(time(NULL));
	int tam=pow(26,3),i=0;

	char letra=(rand()%26)+65;


	string cad="";

	int factor=25;
	for ( i = 0; i < tam*factor; i++){
		cad+= static_cast<char>((rand()%26)+65);
		cad+= static_cast<char>((rand()%26)+65);
		cad+= static_cast<char>((rand()%26)+65);
		cad+=" ";	
	}
	//cout<<cad<<endl;

	int i1=0,i2=4;
	string aux;
	int contador=0;
	for (i = 0; i < tam*factor; i++){
		aux=cad.substr(i1,i2);
		if (aux.compare("IPN ") == 0)
		{
			
			contador++;
		}
		
		i1=i1+4;
	}
	cout<<"Ocurrencias: "<<contador<<endl;

}

