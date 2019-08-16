#pragma once
#include "AVLNode.h"
#include "Arbol.h"

template <class T>
class AVL : public Arbol<T> {

private:
	unsigned int cont = 0;			//

public:
	AVLNode<T> * avlTREE;			//Raiz del arbol

	AVL();							//Constructor default
	AVL(AVLNode<T> *);				//Constructor con parametros
	~AVL();							//Destructor del arbol

	//Funciones
	void preO();					//PreOrden Arbol
	void inO();						//InOrden Arbol
	void postO();					//PostOrden Arbol
	void add(AVLNode<T>*&);			//Añadir nodo nuevo como arbol
	void bal(AVLNode<T>*);			//Balancear el arbol
	void rotIzq(AVLNode<T>*);		//Rotar a la izquierda
	void rotDer(AVLNode<T>*);		//Rotar a la derecha
	void doblRotDer(AVLNode<T>*);	//Doble rotacion a la derecha
	void doblRotIzq(AVLNode<T>*);	//Doble rotacion a la izquierda
};