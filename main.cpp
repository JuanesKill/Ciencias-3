#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <string.h>
#include "pila.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
pila parentesis;
char abiertos[]= "([{";
char cerrados[]= ")]}";
bool ValidarCerrado(char caracter[]){
	char ncaracter= caracter[0];
	int recorrer=0;	
	while( ncaracter != cerrados[recorrer] && cerrados[recorrer] != '\0' ){
		recorrer++;
		cout << recorrer;		
		}
	if(cerrados[recorrer] != '\0'){
		if(parentesis.PilaVacia()==false){
			if(abiertos[recorrer] == parentesis.Pop()){
					cout<<ncaracter;
					return true;
			}else{
				std::cout<<" error, simbolo de cierre no compatible";
				return false;
			}
		}else{
			std::cout<<"error, no se encuentra caracter de apertura ";
			return false;
		}
	}else{
		std:: cout << "no es de cierre";	
		return false;
	}
}

bool ValidarAbierto(char caracter[]){
	char ncaracter= caracter[0];
	int recorrer=0;
	while( ncaracter != abiertos[recorrer] && abiertos[recorrer] != '\0' ){
		recorrer++;
		cout << recorrer;		
		}
	if(abiertos[recorrer] != '\0'){
		
		parentesis.Push(ncaracter);
		cout << ncaracter;
		return true;
	}else{
		std:: cout << "no es de apertura";	
		return false;
	}
}
void EquilibrarSimbolos(char cadena[]){
	int actual=0;
	char cola[100];
    char inicio[1];
    for(int i=0; i<=100;i++){
    	int actual=0;
	    strncpy(inicio, cadena, 1);
	    inicio[1] = '\0'; 
	    strncpy(cola, cadena+1, 100);
	    cola[100] = '\0'; //Si esto no se hace, la salida es imprevisible
		while(inicio[actual] =! '/0'){
			bool res= ValidarAbierto(inicio);
			if(res==false){
				bool res2= ValidarCerrado(inicio);
				if(res2==false){
					std::cout<<"no es parentesis, " + inicio[0];
				}
			}
			actual++;	
		}
	}
}




	

int main(int argc, char** argv) {
	char cadena[5]= "(";
	//EquilibrarSimbolos(cadena);
	bool ValidarAbierto(cadena);
//	bool ValidarCerrado(cadena);
//	std::cout << cadena[100];
//	std::cout << cadena[0];
	return 0;
}

