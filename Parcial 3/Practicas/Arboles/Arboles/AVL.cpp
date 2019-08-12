#include "AVL.h"


template <class T>
AVL<T>::AVL() {

	avlTREE = nullptr;

}

template<class T>
AVL<T>::AVL(User<T>* arbol) {
	arbolito = arbol;
}

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
void AVL<T>::add(User<T> *&newUser) {
	
	if (avlTREE != nullptr) {
		avlTREE->add(newUser);
	}
	else {
		avlTREE = newUser;
	}

}

//
template<class T>
void AVL<T>::bal(User<T> * First) {

	if (First->izq != nullptr) {
		User<T> * temp = First;
		cont++;
		First->balUser(First->izq, cont, nullptr);
	}
	if (First->der != nullptr) {
		cont++;
		First->balUser(First->der, cont, nullptr);
	}
}

//Borrado 2, que si srive
template<class T>
void AVL<T>::Delete(string delAp) {

	User<T> * temp1 = nullptr;
	User<T> * temp2 = nullptr;
	temp1 = arbolito;

	while (temp1 != nullptr) {

		if (delAp > temp1->data) {

			if (temp1->der != nullptr) {

				temp2 = temp1;
				temp1 = temp1->der;

			}

		}


		else if (delAp == temp1->data) {

			if (temp1->izq != nullptr && temp1->der == nullptr) {

				if (temp2 != nullptr) {

					if (temp2->izq == temp1) {

						temp2->izq = temp1->izq;

					}

					else if (temp2->der == temp1) {

						temp2->der = temp1->izq;

					}

					temp1->izq = nullptr;
					delete temp1;

				}

			}

			else if (temp1->izq == nullptr && temp1->der == nullptr) {

				if (temp2 != nullptr) {

					if (temp2->der == temp1) {

						temp2->der = nullptr;

					}

					else if (temp2->izq == temp1) {

						temp2->izq = nullptr;

					}

				}

				delete temp1;
				break;

			}

			else if (temp1->izq == nullptr && temp1->der != nullptr) {

				if (temp2 != nullptr) {

					if (temp2->izq == temp1) {

						temp2->izq = temp1->der;

					}

					else if (temp2->der == temp1) {

						temp2->der = temp1->der;

					}

					temp1->der = nullptr;
					delete temp1;

				}

			}


		}

		else {

			if (temp1->izq != nullptr) {

				temp2 = temp1;
				temp1 = temp1->izq;

			}

		}
	}
}

//Funcion de rotacion izquierda
template <class T>
void AVL<T>::rotIzq(User<T> * a) {

	//Declaramos los punteros a utilizar 
	User<T> * temp = new User<T>();
	User<T> * movNode = new User<T>();

	//En base al dato obtenido igualamos nuestros punteros
	temp = a->der;
	movNode = temp->izq;

	//Swapeamos los nodos
	a->der = movNode;
	temp->izq = a;

}

//Funcion de rotacion derecha
template <class T>
void AVL<T>::rotDer(User<T> * a) {
	//Se moverá el nodo derecho del que se convertirá en el padre
	//Se conectará el antiguo padre al nuevo padre 
	//Se le conectará el nodo que era derecho del anterior a su izquierda

	//Creamos loss punteros
	User<T> * temp = new User<T>();
	User<T> * movNode = new User<T>();

	//Los igualamos a lo requerido
	temp = a->izq;
	movNode = temp->der;

	//Swap
	a->izq = movNode;
	temp->der = a;

}


template <class T>
void AVL<T>::doblRotDer(User<T> * a) {

	rotIzq(a->izq);
	rotDer(a);

}


template <class T>
void AVL<T>::doblRotIzq(User<T> * a) {

	rotDer(a->der);
	rotIzq(a);

}



template class AVL<Persona>;
