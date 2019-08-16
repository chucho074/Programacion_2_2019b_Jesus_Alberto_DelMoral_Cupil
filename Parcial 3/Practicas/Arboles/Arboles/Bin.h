#pragma once
#include "BinNode.h"
#include "Arbol.h"

template <class T>
class Bin : public Arbol<T> {

private:
	unsigned int cont = 0;	//

public:
	BinNode<T> * arbolito;	//Raiz del arbol

	Bin();					//Constructor default
	Bin(BinNode<T> *);		//Constructor con parametros
	~Bin();					//Destructor del arbol

	//Funciones
	void preO();			//PreOrden Arbol
	void inO();				//InOrden Arbol
	void postO();			//PostOrden Arbol
	void add(BinNode<T>*&);	//Añadir usuario nuevo como arbol


};