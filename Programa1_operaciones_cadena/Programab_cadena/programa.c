#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

char* subString(const char* input, int offset, int len, char* dest);

int main(){
	

	srand(time(NULL));
	int tam=pow(26,3),i=0;
	int factor=5;
	//int tam=pow(2,3),i=0;
	//int factor=2;
	char letra=(rand()%26)+65;

	char *cad;
	cad = malloc(sizeof(char*) * tam*factor);
	for ( i = 0; i < tam*factor; i++){

		char str1[2] = {(char)( (rand()%26)+65 ), '\0'};
		char str2[2] = {(char)( (rand()%26)+65 ), '\0'};
		char str3[2] = {(char)( (rand()%26)+65 ), '\0'};

		strcat(cad, str1 );
		strcat(cad, str2 );
		strcat(cad, str3 );
		strcat(cad, " ");
		//printf("%s\n", cad);
		/*cad+= static_cast<char>((rand()%26)+65);
		cad+= static_cast<char>((rand()%26)+65);
		cad+= static_cast<char>((rand()%26)+65);
		cad+=" ";	*/
	}

	int i1=0,i2=4;
	char* aux;
	aux = malloc(sizeof(char*)*4);
	int contador=0;
	for (i = 0; i < tam*factor; i++){

		subString(cad, i1,i2,aux);
		//cad.substr(i1,i2);
		if (strcmp(aux,"IPN ") == 0)
		{
			
			contador++;
		}
		
		i1=i1+4;
	}
	printf("Ocurrencias: %d\n",contador );

}


char* subString(const char* input, int offset, int len, char* dest)
{
	int input_len = strlen(input);
	if (offset + len > input_len)
	{
		return NULL;
	}
	strncpy(dest,input+offset,len);
	return dest;
}
