#include "AVL.h"
#include "Persona.h"

//Constructor default
template <class T>
AVL<T>::AVL() {

	avlTREE = nullptr;

}

//Constructor con parametros
template<class T>
AVL<T>::AVL(AVLNode<T>* arbol) {

	avlTREE = arbol;

}

//Destructor
template <class T>
AVL<T>::~AVL() {

	if (avlTREE != nullptr) {
		delete avlTREE;
	}

}



		//Funciones



//PreOrden Arbol
template<class T>
void AVL<T>::preO() {

	if (avlTREE != nullptr) {
		avlTREE->preO();
	}

}

//InOrden Arbol
template<class T>
void AVL<T>::inO() {
	
	if (avlTREE != nullptr) {
		avlTREE->inO();
	}

}

//PostOrden Arbol
template<class T>
void AVL<T>::postO() {

	if (avlTREE != nullptr) {
		avlTREE->postO();
	}

}

//Añadir usuario nuevo como arbol
template<class T>
void AVL<T>::add(AVLNode<T> *&newAVLNode) {
	
	if (avlTREE != nullptr) {
		avlTREE->add(newAVLNode);
		bal(newAVLNode);
	}
	else {
		avlTREE = newAVLNode;
	}

}

//Balancear el arbol
template<class T>
void AVL<T>::bal(AVLNode<T> * First) {

	if (First->izq != nullptr) {
		AVLNode<T> * temp = First;
		cont++;
		First->balAVLNode(First->izq, cont, nullptr);
	}
	if (First->der != nullptr) {
		cont++;
		First->balAVLNode(First->der, cont, nullptr);
	}

}

//Funcion de rotacion izquierda
template <class T>
void AVL<T>::rotIzq(AVLNode<T> * a) {

	//Declaramos los punteros a utilizar 
	AVLNode<T> * temp = new AVLNode<T>();
	AVLNode<T> * movNode = new AVLNode<T>();

	//En base al dato obtenido igualamos nuestros punteros
	temp = a->der;
	movNode = temp->izq;

	//Swapeamos los nodos
	a->der = movNode;
	temp->izq = a;

}

//Funcion de rotacion derecha
template <class T>
void AVL<T>::rotDer(AVLNode<T> * a) {
	//Se moverá el nodo derecho del que se convertirá en el padre
	//Se conectará el antiguo padre al nuevo padre 
	//Se le conectará el nodo que era derecho del anterior a su izquierda

	//Creamos loss punteros
	AVLNode<T> * temp = new AVLNode<T>();
	AVLNode<T> * movNode = new AVLNode<T>();

	//Los igualamos a lo requerido
	temp = a->izq;
	movNode = temp->der;

	//Swap
	a->izq = movNode;
	temp->der = a;

}

//Funcion Doble rotacion derecha
template <class T>
void AVL<T>::doblRotDer(AVLNode<T> * a) {

	rotIzq(a->izq);
	rotDer(a);

}

//Funcion Doble rotacion izquierda
template <class T>
void AVL<T>::doblRotIzq(AVLNode<T> * a) {

	rotDer(a->der);
	rotIzq(a);

}



template class AVL<Persona>;	//Clase AVL con tipo de dato 'Persona'
//template class Arbol<Persona>;	//Clase Arbol con tipo de dato 'Persona'

//template class AVL<int>;		//Clase AVL con tipo de dato 'int'
//template class Arbol<int>;		//Clase Arbol con tipo de dato 'int'