//Incluedes
#pragma once
#include "Lirberias.h"

//Clase principal
class Pila {

protected:
	Nodo * first;
public:
	//Añadir a la pila
	void addPila(Nodo *&nodo);

	//Eliminar de la pila
	void remPila(Nodo *&pila, string & n, int & a);

	

	Pila();
	~Pila();
};