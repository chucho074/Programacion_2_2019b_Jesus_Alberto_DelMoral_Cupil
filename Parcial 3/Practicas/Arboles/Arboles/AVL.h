#pragma once
#include "AVLNode.h"
#include "Arbol.h"

template <class T>
class AVL : public Arbol<T> {
private:
	unsigned int cont = 0;

public:
	AVLNode<T> * avlTREE;

	AVL();
	AVL(AVLNode<T> * arbol);
	~AVL();


	void preO();			//PreOrden Arbol

	void inO();				//InOrden Arbol

	void postO();			//PostOrden Arbol

	void add(AVLNode<T>*&);	//Añadir usuario nuevo como arbol

	void bal(AVLNode<T>*);		//Balancear el arbol

	//void Delete(string);	//Borrado desde el arbol

	void rotIzq(AVLNode<T>*);

	void rotDer(AVLNode<T>*);

	void doblRotDer(AVLNode<T>*);

	void doblRotIzq(AVLNode<T>*);


};

