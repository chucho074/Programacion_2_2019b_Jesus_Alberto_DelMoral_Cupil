		//Includes
#include "Pila.h"


		//Funciones
//Constructor
Pila::Pila() {

}

//Destructor
Pila::~Pila() {

}

		//Funciones principales

//Añadir a la pila
void Pila::addPila(Nodo *&list, string name, int age){
	Nodo * NewNodo = new Nodo();	//Crear el espacio en memoria
	NewNodo->name = name;	//Ingresar datos
	NewNodo->age = age;	//Ingresar datos parte 2
	Nodo *aux1 = list;
	
}

//Eliminar de la pila
void Pila::remPila(Nodo *&pila, string name, int age) {
	Nodo *aux = pila;	
	age = aux->age;	
	name = aux->name;
	pila = aux->next;	
	delete aux;		//Eliminar
	

}

