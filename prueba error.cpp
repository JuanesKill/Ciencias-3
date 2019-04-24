#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {

   char cadena[100];
   char inicio[1];
   char origen[] = "abcdefghiasdasdas";
   strncpy(inicio, origen, 1);
   inicio[1] = '\0';
   std::cout<< inicio << " ";
   strncpy(cadena, origen+1, 100);
   cadena[100] = '\0'; //Si esto no se hace, la salida es imprevisible
	std:: cout << cadena ;
	int recorrer=0;
	char caracter= '{';
	char abiertos[]= "([{";
	
	while( caracter != abiertos[recorrer] && abiertos[recorrer] != '\0' ){
			++recorrer;
			std:: cout << recorrer;
		
	//		parentesis.Push(caracter);
		}
	if(abiertos[recorrer] != '\0'){
		std:: cout << caracter;
	}else{
		std:: cout << "no es de apertura";
	}
	
	return 0;
}
