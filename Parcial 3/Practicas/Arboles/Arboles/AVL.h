#pragma once
#include "User.h"
#include "Arbol.h"

template <class T>
class AVL : public Arbol{
private:
	unsigned int cont = 0;

public:
	User<T> * avlTREE;

	AVL();
	AVL(User<T> * arbol);
	~AVL();


	void preO();			//PreOrden Arbol

	void inO();				//InOrden Arbol

	void postO();			//PostOrden Arbol

	void add(User<T>*&);	//Añadir usuario nuevo como arbol

	void bal(User<T>*);		//Balancear el arbol

	void Delete(string);	//Borrado desde el arbol

	void rotIzq(User<T>*);

	void rotDer(User<T>*);

	void doblRotDer(User<T>*);

	void doblRotIzq(User<T>*);


};

