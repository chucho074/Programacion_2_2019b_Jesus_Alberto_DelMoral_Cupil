/*
	Utilities.cpp
		v1.1
*/

//Includes
#include "Utilities.h"
#include "Pila.h"
#include "listaEnl.h"
#include "Cola.h"

		//Funciones

//Funcion menu
void f_menu() {
	Pila C_Pila;
	listaEnl Lista;
	Cola C_Cola;
	bool final = false;
	Nodo * pila = NULL;	//holis
	string nam;
	int age;
	do{
		cout << "Bienvenido usuario" << endl;
		char action;
		cin >> action;
		switch (action) {
				//Añadir valores 
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
				C_Pila.addPila(pila,nam,age);
				
			}
			break;
		}
				
				  //Eliminar valores
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
				
				  //Añadir valores cola
		case '3': {
			unsigned short val1 = 1;
			cout << "Cuantos valores quiere aniadir" << endl;
			cin >> val1;
			for (int i = 0; i < val1; i++) {
				cout << "Estas creando nodos amigo" << endl;
				Nodo *front = NULL;
				Nodo *back = NULL;
				cout << "Agrega un nombre" << endl;
				cin >> nam;
				cout << "Agrega una edad" << endl;
				cin >> age;
				C_Cola.addCola(front, back, age, nam);

			}
			break;
		}

				  //Salir del programa
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

void f_quicksort(short izq, vector<NodoDoble> & vectorx, short der) {
	int temp, i, j; 
	NodoDoble piv;
	i = izq;
	j = der;
	piv.age = vectorx[(izq + der) / 2].age;

	do {
		while ((piv.age > vectorx[i].age) && (j <= der)) {
			i++;
		}
		while ((piv.age < vectorx[j].age) && (j > izq)) {
			j--;
		}
		if (i <= j) {
			temp = vectorx[i].age;
			vectorx[i].age = vectorx[j].age;
			vectorx[j].age = temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (izq < j) {
		f_quicksort(izq, vectorx, j);
	}
	if (der > i) {
		f_quicksort(i, vectorx, der);
	}
}

void aVector(NodoDoble * First, int NodoLong) {
	unsigned short counter = 0;
	vector<NodoDoble> VectorNodo;
	if (counter < NodoLong) {
		VectorNodo[counter] = *First;
		if (First->next != nullptr) {
			counter++;
			aVector(First, 5);
		}
	}
	f_quicksort(0, VectorNodo, VectorNodo.size() - 1);
}