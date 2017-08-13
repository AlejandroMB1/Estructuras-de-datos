#include "algoritmos.h"

int exponenciacion (int base, int exponente) {
	
	int resultado = 1;
	
	for (int i = 1; i <= exponente; i++){
		
		resultado *= base;
		
	}
	
	return resultado;

}

int busqueda_secuencial (int array[], int tamanio, int elemento ) {
	
	int i = 0;
	while (i < tamanio) {
		
		if (array[i] == elemento) {
			
			return i;
		}
		i++;
	}
	
	return -1;	
	
}

void ordenamiento_burbuja (int arreglo[], int tamanio){
	
	for (int i = 0; i <= tamanio - 2; i++) {
		
		for (int j = 0; j <= tamanio - 2 - i; j++) {
			
			if ( arreglo[j+1] < arreglo[j]) {
				
				int tmp = arreglo[j];
				arreglo[j] = arreglo[j+1];
				arreglo[j+1] = tmp;
				
			}
		}
	}
}

void ordenamiento_seleccion (int arreglo2[], int tamanio){

	for (int i = 0; i <= tamanio - 2; i++) {

		int min = i;

		for (int j = i + 1; j <= tamanio - 1 ; j++) {

			if (arreglo2[j] < arreglo2[min]) {

				min = j;

			} 
		}
		int tmp = arreglo2[min];
		arreglo2[min] = arreglo2[i];
		arreglo2[i] = tmp;
	}

}

int emparejamiento_cadenas (string texto, string linea){

	int n = texto.length();
	int m = linea.length();

	for (int i = 0; i < n-m; i++) {
		int j = 0;

		while ( j < m && linea[j] == texto[i + j]) {

			j++; 

		}

		if ( j == m ) {
			return i;
		}
	}

	return -1;
}







