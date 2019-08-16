#pragma once

template <class T>
class Nodes {

public:

	Nodes() {};									//Constructor
	~Nodes() {};								//Destructor

	//Funciones
	void virtual preO() {};						//PreOrden Nodo
	void virtual inO() {};						//InOrden Nodo
	void virtual postO() {};					//PostOrden Nodo
	void virtual erase(T) {};					//Eliminar nodo

	//Sobrecarga de operadores
//	bool virtual operator < (Nodes<T> &) {};	//Operador menor que 
//	bool virtual operator > (Nodes<T> &) {};	//Operador mayor que
};