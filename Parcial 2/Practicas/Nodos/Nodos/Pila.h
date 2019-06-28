//Incluedes
#pragma once
#include "Librerias.h"

//Clase principal
class Pila {
protected:
//	Nodo * first;
public:
	//Añadir a la pila
	void addPila(Nodo *&list, string name, int age);

	//Eliminar de la pila
	void remPila(Nodo *&list, string name, int age);

	

	Pila();
	~Pila();
};