#pragma once
#include "Librerias.h"

class Cola {
public:

	//Añadir a la cola
	void addCola(Nodo *&, Nodo *&, int, string);

	//Eliminar de la cola


	//Vacia o no 
	bool EmptyCola(Nodo *& front) {
		if (front == NULL) {
			return true;
		}
		else {
			return false;
		}
	}

	Cola();
	~Cola();
};

