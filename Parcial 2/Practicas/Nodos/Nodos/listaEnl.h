//Includes
#pragma once
#include "Librerias.h"
#include "NodoDoble.h"

//Clase principal
class listaEnl {
public:

	//
	NodoDoble * First;
	NodoDoble * Last;

	//
	int get_front();
	int get_back();


	//delete




	//Añadir
	void add_midfront(int Data);
	void add_midback(int Data);


	void x();

	//Añadir a la ListaEnlazada
	void addElement(NodoDoble *&list, string name, int age);

	//Eliminar de la listaEnlazada
	void deletElement(NodoDoble *&list, string name, int age);



	listaEnl();
	~listaEnl();
};