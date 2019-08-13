#pragma once
#include "BinNode.h"
#include "Arbol.h"

template <class T>
class Bin : public Arbol<T> {

private:
	unsigned int cont = 0;
public:
	BinNode<T> * arbolito;

	Bin();	//Constructor default
	Bin(BinNode<T> * arbol);	//Constructor con parametros
	~Bin();	//Destructor del arbol
	//Funciones
	void preO();			//PreOrden Arbol
	void inO();				//InOrden Arbol
	void postO();			//PostOrden Arbol
	void add(BinNode<T>*&);	//Añadir usuario nuevo como arbol
	void Delete(string);	//Borrado desde el arbol

};

