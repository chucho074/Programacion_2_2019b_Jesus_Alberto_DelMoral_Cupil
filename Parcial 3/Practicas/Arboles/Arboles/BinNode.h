#pragma once
#include <string>
#include <iostream>
#include "Persona.h"
#include "Nodes.h"

using std::string;
using std::cout;

typedef unsigned int unsInt;

template <class T>
class BinNode : public Nodes<T> {

public:
	
	BinNode();								//Constructor
	BinNode(T);								//Constructor con parametros
	~BinNode();								//Destructor

	T data;									//Contenido

	//Nodos
	BinNode * prev = nullptr;				//Nodo previo
	BinNode *izq = nullptr;					//Nodo de la izquierda
	BinNode *der = nullptr;					//Nodo de la derecha

	//Funciones
	void preO();							//PreOrden Nodo
	void inO();								//InOrden Nodo
	void postO();							//PostOrden Nodo
	void add(BinNode<T>*);					//Añadir un nodo al arbol
	BinNode<T> * serch(BinNode<T>*, T);		//Buscar un nodo
	void erase(T);							//Borrar un nodo
	BinNode<T> * lastNodeDer(BinNode<T> *);		//Buscar ultimo nodo a la derecha
	BinNode<T> * lastNodeIzq(BinNode<T> *);		//Buscar ultimo nodo a la izquierda

	//Sobrecargas de operadores
	bool operator < (BinNode<T> &);			//Operador menor que
	bool operator > (BinNode<T> &);			//Operador mayor que 


};