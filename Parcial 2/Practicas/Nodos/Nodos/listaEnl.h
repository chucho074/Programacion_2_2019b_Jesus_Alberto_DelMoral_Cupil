//Includes
#pragma once
#include "Lirberias.h"

//Clase principal
class listaEnl {
public:

	//Añadir a la ListaEnlazada
	void addElement(NodoDoble *&list, string name, int age);

	//Eliminar de la listaEnlazada
	void deletElement(NodoDoble *&list, string name, int age);

	listaEnl();
	~listaEnl();
};