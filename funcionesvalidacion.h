#ifndef FUNCIONESVALIDACION_H     
#define FUNCIONESVALIDACION_H  
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
class Equilibrio{
	public:
	pila parentesis;
	bool ValidarCerrado(char caracter[], char cerrados[], char abiertos[]);
	bool ValidarAbierto(char caracter[], char abiertos[]);
};
		
bool Equilibrio:: ValidarCerrado(char caracter[],char cerrados[], char abiertos[]){
	char ncaracter= caracter[0]; 
	int recorrer=0;	
	while( ncaracter != cerrados[recorrer] && cerrados[recorrer] != '\0' ){ //ciclo que evalua el caracter a evaluar con cada caracter del arreglo de cerrados o abiertos
		recorrer++;		
		}
	if(cerrados[recorrer] != '\0'){  //ciclo evalua cuando ya no hay caracter 
		if(parentesis.PilaVacia()==false){ // evalua si la pila esta vacia
			char temporal= parentesis.Pop(); // variable temporal que guarda el tope de la pila para compararlo con el simbolo de cierre que pueda llegar, sacandolo de la pila
			if(abiertos[recorrer] == temporal){ // evalua si el caracter a equilibrar es compatible con el caracter del tope de la pila  que debe ser de cierre, guardado en la variable temporal
					cout<<ncaracter;
					return true;
			}else{
				parentesis.Push(temporal);   // si no es compatible,  vuelve a empujar a la pila al caracter de apertura  mediante la variable temporal
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
bool Equilibrio::ValidarAbierto(char caracter[],char abiertos[]){
	 	char ncaracter= caracter[0];
	int recorrer=0;
	while( ncaracter != abiertos[recorrer] && abiertos[recorrer] != '\0' ){//ciclo que evalua el caracter a evaluar con cada caracter del arreglo de cerrados o abiertos
		recorrer++;		
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

#endif

