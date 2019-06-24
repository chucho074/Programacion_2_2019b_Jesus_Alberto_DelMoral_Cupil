/*
	Utilities.cpp
		v1.1
*/

//Includes
#include "Utilities.h"
#include "Pila.h"

		//Funciones

//Funcion menu
void f_menu() {
	Pila C_Pila;
	bool final = false;
	//Nodo * pila = NULL;
	string nam;
	int age;
	do{
		cout << "Bienvenido usuario" << endl;
		char action;
		cin >> action;
		switch (action) {
		case '1': {
			unsigned short val1 = 1;
			cout << "Cuantos valores quiere aniadir" << endl;
			cin >> val1;
			for (int i = 0; i < val1; i++) {
				cout << "Estas creando nodos amigo" << endl;
				cout << "Agrega un nombre" << endl;
				cin >> nam;
				cout << "Agrega una edad" << endl;
				cin >> age;
				C_Pila.addPila(new Nodo( nam, age) );
				
			}
			break;
		}
		case '2': {
			cout << "Eliminando todos los datos" << endl;
			while (pila != NULL) {
				C_Pila.remPila(pila, nam, age);
				if (pila != NULL) {
					cout << nam << " " << age << " , ";
				}
				else {
					cout << nam <<" "<< age << ".\n";
				}
			}
			break;
		}
		case '3': {

		}
		case '0': {
			final = true;
			cout << endl << "Hasta luego usuario" << endl;
		}
		
		default:
			cout << "\nOpcion no valida" << endl;
			break;
		}

	} while (final==false);
}



