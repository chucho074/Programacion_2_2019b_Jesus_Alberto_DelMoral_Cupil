		//Includes
#include "Pila.h"


		//Funciones
Pila::Pila() {

}


Pila::~Pila() {

}

		//Funciones principales

//Añadir a la pila
void Pila::addPila(Nodo *& pila, string name, int age){
	Nodo *new_nodo = new Nodo();	//Crear el espacio en memoria
	new_nodo->name = name;	//Ingresar datos
	new_nodo->age = age;	//Ingresar datos parte 2
	new_nodo->next = pila;	//Ingresar el puntero
	pila = new_nodo;	//Igualar a lo nuevo
}

//Eliminar de la pila
void Pila::remPila(Nodo *& pila, string & n, int & a) {
	Nodo *aux = pila;	
	a = aux->age;	
	n = aux->name;
	pila = aux->next;	
	delete aux;		//Eliminar
}

