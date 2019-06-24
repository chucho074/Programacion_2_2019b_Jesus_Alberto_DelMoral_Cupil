/*
	listaEnl.cpp
		v1.0

*/

//Includes
#include "listaEnl.h"


//Constructor
listaEnl::listaEnl() {

}

//Destructor
listaEnl::~listaEnl() {

}


	//Funciones principales

//Añadir elemento a la ListaEnlazada
void addElement(Nodo *&list, string name, int age) {
	Nodo * NewNodo = new Nodo();	//Crear el espacio en memoria
	NewNodo->name = name;	//Ingresar datos
	NewNodo->age = age;	//Ingresar datos parte 2
	Nodo *aux1 = list;
	Nodo *aux2;

	while((aux1 != NULL) && (aux1->age < age)) {
		aux2 = aux1;
		aux1 = aux1->next;
	}
	
	if (list == aux1) {
		list = NewNodo;
	}

	else {
		aux2->next = NewNodo;
	}

	NewNodo->next = aux1;
}

//Eliminar elemento de la ListaEnalzada
void deletElement() {
	
}