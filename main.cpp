#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <string.h>
#include "pila.h"
#include "funcionesvalidacion.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

	

int main(int argc, char** argv) {
	Equilibrio func; // inicializacion del objeto func del tipo clase equilibro
	char abiertos[]= "([{"; // arreglo con caracteres de apertura que reconocera el programa
	char cerrados[]= ")]}";	// arreglo con caracteres de cierre que reconocera el programa
	char cadena[]= "{[(())]}"; // cadena a evaluar o a equilibrar
	char cola[100]; // cola ee la "" ""
    char inicio[1]; // inicio de la cadena a evaluar
    for(int i=0; i<sizeof(cadena)-1;i++){
	    strncpy(inicio, cadena+i, 1);
	    inicio[1] = '\0'; 
	    strncpy(cola, cadena+i+1, 100);
	    cola[100] = '\0'; //Si esto no se hace, la salida es imprevisible
		bool res= func.ValidarAbierto(inicio,abiertos);
		if(res==0){    //ciclo que permite que cuando evalue que no esta entre los caracteres abiertos, verifique en los caracteres cerrados
		bool res2= func.ValidarCerrado(inicio,cerrados,abiertos);
		if(res2==0){
		std::cout<<"no es parentesis, es el caracter " + inicio[0];
		}
				
		}
	}
	return 0;
}
