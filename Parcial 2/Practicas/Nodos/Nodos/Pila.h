//Incluedes
#pragma once
#include "Lirberias.h"

//Clase principal
class Pila {
public:
	//A�adir a la pila
	void addPila(Nodo *&pila, string name, int age);

	//Eliminar de la pila
	void remPila(Nodo *&pila, string & n, int & a);

	

	Pila();
	~Pila();
};