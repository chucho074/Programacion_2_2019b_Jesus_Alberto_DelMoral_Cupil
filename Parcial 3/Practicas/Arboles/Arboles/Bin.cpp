#include "Bin.h"

//Constructor default
template<class T>
Bin<T>::Bin() {
	arbolito = nullptr;
}

template<class T>
Bin<T>::Bin(User<T>* arbol) {
	arbolito = arbol;
}

//Destructor del arbol
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
void Bin<T>::add(User<T> *&newUser) {
	if (arbolito != nullptr) {
		arbolito->add(newUser);
	}
	else {
		arbolito = newUser;
	}
}

//Borrado desde el arbol
template<class T>
void Bin<T>::Delete(string delAp) {

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

template class Bin<Persona>;