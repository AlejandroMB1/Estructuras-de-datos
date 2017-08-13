#include "algoritmos.h"
#include "algoritmos.cpp"

int main(){
	
	int opcion = -1;
	while ( opcion != 0){
		
	    cout << endl;
		cout << "0:Salir " << endl		
		<< "1: exponenciacion "	<< endl 
		<< "2: Busqueda secuencial "  << endl
		<< "3: Ordenamiento burbuja" << endl 
		<< "4: Ordenamiento seleccion" << endl 
		<< "5: Emparejamiento por cadenas " << endl;
		cout << endl;
		cout << "Seleccione una opcion: "; 
		cin >> opcion;
				
		switch( opcion ) {

			case 0: {
				return 0;
			}
					
			case 1: {

				int base, exponente;
				cout << endl;
				cout << "Ingrese la base: ";
				cin >> base;
				cout << "Ingrese el exponente: ";
				cin >> exponente;
				cout << endl;				 
				cout << exponenciacion (base, exponente) << endl;
				break;
			
			}
	
			case 2: {
				cout << endl;
				int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
				cout << busqueda_secuencial (array, 10, 6) << endl;
				break;
			}
			
				
			case 3: { 
				cout << endl;
				int arreglo[] = {10,17,45,350,87,65,510};
				ordenamiento_burbuja(arreglo, 7);

				for( int i = 0; i < 7 ; i++){

					cout << arreglo[i] << endl;

				}
				break;
			}

			case 4: {
				cout << endl;
				int arreglo2[] = {5,7,8,1,0,3,-2};
				ordenamiento_seleccion(arreglo2,7);


				for( int i = 0; i < 7 ; i++){

					cout << arreglo2[i] << endl;

				}
				break;
			}
			
			case 5: {
				cout << endl;
				string texto = "hola mundo espero que esten muy bien";
				string linea = "mundo";
				cout << emparejamiento_cadenas(texto,linea) << endl;

			}
		}

	}
		
}
