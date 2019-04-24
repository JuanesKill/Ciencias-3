#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include "pila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
pila parentesis;
char abiertos[]= "([{";
char cerrados[]= ")]}";
void EquilibrarSimbolos(char cadena[]){
	char caracter;
	int n=0;
	char cola[100];
    char inicio[1];
    strncpy(inicio, cadena, 1);
    inicio[1] = '\0';
    std::cout<< inicio << " ";
    strncpy(cola, cadena+1, 100);
    cola[100] = '\0'; //Si esto no se hace, la salida es imprevisible
	std:: cout << cola ;
	while(inicio[0] =! '/0'){
		
		if(bool ValidarAbierto(inicio)==false){
			
		}
		
			if(caracter == cerrados[0] || caracter == cerrados[1]){
				if(parentesis.PilaVacia()==true){
					cout<<"Error en el codigo, falta parentesis de entrada";
				}else{
					switch(caracter){
						case cerrados[0]:
							if(parentesis.Pop()==abiertos[0]) 
							else{
								parentesis.Push(caracter);
								cout<<"Error en el codigo, falta parentesis de entrada";
							} 
					}
				}
			}
		
	//}
}

bool ValidarAbierto(char caracter){
	char abiertos[]= "([{";
	int recorrer=0;
	while( caracter != abiertos[recorrer] && abiertos[recorrer] != '\0' ){
		recorrer++;
		cout << recorrer;		
		}
	if(abiertos[recorrer] != '\0'){
		parentesis.Push(caracter);
		std:: cout << caracter;
		return true;
	}else{
		std:: cout << "no es de apertura";	
		return false;
	}
}

	

int main(int argc, char** argv) {
	char cadena='l';
	//EquilibrarSimbolos(cadena);
	
	bool ValidarAbierto(cadena);
	
//	std::cout << cadena[100];
//	std::cout << cadena[0];
	return 0;
}
