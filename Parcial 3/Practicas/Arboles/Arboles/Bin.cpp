#include "Bin.h"
#include "Persona.h"

//Constructor default
template<class T>
Bin<T>::Bin() {

	arbolito = nullptr;

}

//Constructor con parametros
template<class T>
Bin<T>::Bin(BinNode<T>* arbol) {

	arbolito = arbol;

}

//Destructor
template<class T>
Bin<T>::~Bin() {

	if (arbolito != nullptr) {
		delete arbolito;
	}

}



		//Funciones



//PreOrden Arbol
template<class T>
void Bin<T>::preO() {
	
	if (arbolito != nullptr) {
		arbolito->preO();
	}

}

//InOrden Arbol
template<class T>
void Bin<T>::inO() {

	if (arbolito != nullptr) {
		arbolito->inO();
	}
	
}

//PostOrden Arbol
template<class T>
void Bin<T>::postO() {

	if (arbolito != nullptr) {
		arbolito->postO();
	}

}

//Añadir usuario nuevo como arbol
template<class T>
void Bin<T>::add(BinNode<T> *&newUser) {

	if (arbolito != nullptr) {
		arbolito->add(newUser);
	}
	else {
		arbolito = newUser;
	}

}




//Templates
template class Bin<Persona>;	//Clase Bin con tipo de dato 'Persona'
//template class Arbol<Persona>;	//Clase Arbol con tipo de dato 'Persona'	

//template class Bin<int>;		//Clase Bin con tipo de dato 'int'
//template class Arbol<int>;		//Clase Arbol con tipo de dato 'int'