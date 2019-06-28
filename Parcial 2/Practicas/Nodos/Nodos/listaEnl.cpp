/*
	listaEnl.cpp
		v1.0

*/

		//Includes
#include "listaEnl.h"

//Constructor
listaEnl::listaEnl() {
	First = new NodoDoble();
	Last = new NodoDoble();
	First->next = Last;
	First->before = NULL;
	Last->before = First;
	Last->next = NULL;
}



//Destructor
listaEnl::~listaEnl() {

}


		//Funciones principales

int listaEnl::get_front() {
	return First->next->age;
}


int listaEnl::get_back() {
	return Last->before->age;
}

//Añadir entre el primero y la mitad (o ultimo)
void listaEnl::add_midfront(int Data) {
	NodoDoble * NewNodo = new NodoDoble();
	NewNodo->age = Data;
	NewNodo->before = First;
	NewNodo->next = First->next;
	First->next->before = NewNodo;
	First->next = NewNodo;

}

//Añadir entre el ultimo y la mitad (o primero)
void listaEnl::add_midback(int Data) {
	NodoDoble * NewNodo = new NodoDoble();
	NewNodo->age = Data;
	NewNodo->next = Last;
	NewNodo->before = Last->before;
	Last->before->next = NewNodo;
	Last->before = NewNodo;
}

//
void listaEnl::x() {
	NodoDoble * NewNodo = First;
	while (NewNodo->next != NULL) {
		NewNodo = NewNodo->next;
		cout << NewNodo->age;
	}
	NewNodo->next = new NodoDoble(NewNodo, NewNodo->age);
}

//Añadir elemento a la ListaEnlazada
void listaEnl::addElement(NodoDoble *&list, string name, int age) {
	/*NodoDoble * NewNodo = new NodoDoble();	//Crear el espacio en memoria
	NewNodo->name = name;	//Ingresar datos
	NewNodo->age = age;	//Ingresar datos parte 2
	NodoDoble *aux1 = list;
	NodoDoble *aux2 = NULL;

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

	NewNodo->next = aux1;*/
}




//Eliminar elemento de la ListaEnalzada
void listaEnl::deletElement(NodoDoble *&list, string name, int age) {
	
}