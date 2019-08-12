#pragma once
#include "User.h"
#include "Arbol.h"

template <class T>
class Bin : public Arbol {

private:
	unsigned int cont = 0;
public:
	User<T> * arbolito;

	Bin();	//Constructor default
	Bin(User<T> * arbol);	//Constructor con parametros
	~Bin();	//Destructor del arbol
	//Funciones
	void preO();			//PreOrden Arbol
	void inO();				//InOrden Arbol
	void postO();			//PostOrden Arbol
	void add(User<T>*&);	//Añadir usuario nuevo como arbol
	void Delete(string);	//Borrado desde el arbol

};

