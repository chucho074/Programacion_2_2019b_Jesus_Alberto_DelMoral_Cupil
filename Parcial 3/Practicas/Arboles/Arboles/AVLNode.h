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
	unsInt Nivel = 0;
	unsInt balIzq = 0;
	unsInt balDer = 0;
	unsInt pesoAct = 0;

public:

	//Constructores
	AVLNode();
	AVLNode(T info);

	//Destructor
	~AVLNode();

	T data;

	//Nodo previo
	AVLNode * prev = nullptr;

	//Nodos siguientes
	AVLNode *izq = nullptr;
	AVLNode *der = nullptr;


	void preO();

	void inO();

	void postO();

	void add(AVLNode<T>*);

	void balAVLNode(AVLNode<T>*, unsInt, AVLNode<T>*);

	AVLNode<T> serch(AVLNode<T>*, T);

	//void erase(T delData);

	//Sobrecargas de operadores

	bool operator < (AVLNode<T> & a);

	bool operator > (AVLNode<T> & a);

	//std::ostream & operator << (std::ostream &);
};

