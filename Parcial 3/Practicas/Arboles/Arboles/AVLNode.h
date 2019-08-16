#pragma once
#include <string>
#include <iostream>
#include "Persona.h"
#include "Nodes.h"

using std::string;
using std::cout;

typedef unsigned int unsInt;

template <class T>
class AVLNode : Nodes<T>{
private:
	//Variables
	unsInt Nivel = 0;
	unsInt balIzq = 0;
	unsInt balDer = 0;
	unsInt pesoAct = 0;

public:
	
	AVLNode();											//Constructor
	AVLNode(T info);									//Constructor con parametros
	~AVLNode();											//Destructor

	T data;												//Contenido

	//Nodos
	AVLNode * prev = nullptr;							//Nodo previo
	AVLNode *izq = nullptr;								//Nodo de la izquierda
	AVLNode *der = nullptr;								//Nodo de la derecha

	//Funciones
	void preO();										//PreOrden Arbol
	void inO();											//InOrden Arbol
	void postO();										//PostOrden Arbol
	void add(AVLNode<T>*);								//Añadir un nodo al arbol
	void balAVLNode(AVLNode<T>*, unsInt);	//Revision de balanceo
	AVLNode<T> * serch(AVLNode<T>*, T);					//Buscar un nodo
	void erase(T);										//Borrar un nodo
	AVLNode<T> * lastNodeDer(AVLNode<T> *);					//Buscar ultimo nodo a la derecha
	AVLNode<T> * lastNodeIzq(AVLNode<T> *);					//Buscar ultimo nodo a la izquierda

	//Sobrecargas de operadores
	bool operator < (AVLNode<T> &);						//Operador menor que
	bool operator > (AVLNode<T> &);						//Operador mayor que
	//std::ostream & operator << (std::ostream &);
};