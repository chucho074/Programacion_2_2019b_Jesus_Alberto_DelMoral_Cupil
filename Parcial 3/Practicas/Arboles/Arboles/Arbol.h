#pragma once
#include <string>
using std::string;

template <class T>
class Arbol {

public:

	Arbol() {};							//Constructor
	~Arbol() {};						//Destructor

	//Funciones
	void virtual preO() = 0;			//PreOrden Arbol
	void virtual inO() = 0;				//InOrden Arbol
	void virtual postO() = 0;			//PostOrden Arbol
	//void virtual add(Nodes<T>*&) = 0;	//Añadir nodo como arbol
	
};