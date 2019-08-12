#include "Arbol.h"

//Constructor default
template<class T>
Arbol<T>::Arbol() {
	arbolito = nullptr;
}

template<class T>
Arbol<T>::Arbol(User<T>* arbol) {
	arbolito = arbol;
}

//Destructor del arbol
template<class T>
Arbol<T>::~Arbol() {
	if (arbolito != nullptr) {
		delete arbolito;
	}
}

//PreOrden Arbol
template<class T>
void Arbol<T>::preO() {
	
	if (arbolito != nullptr) {
		arbolito->preO();
	}
}

//InOrden Arbol
template<class T>
void Arbol<T>::inO() {
	if (arbolito != nullptr) {
		arbolito->inO();
	}
	
}

//PostOrden Arbol
template<class T>
void Arbol<T>::postO() {

	if (arbolito != nullptr) {
		arbolito->postO();
	}
}

//A�adir usuario nuevo como arbol
template<class T>
void Arbol<T>::add(User<T> *&newUser) {
	if (arbolito != nullptr) {
		arbolito->add(newUser);
	}
	else {
		arbolito = newUser;
	}
}

//
template<class T>
void Arbol<T>::balance(User<T> * First) {

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

//
//void Arbol::erase(User * First) {
//	
//	string valSerch;
//	std::cin >> valSerch;
//	serch(arbolito, valSerch);
//
//
//}

//Borrado 2, que si srive
template<class T>
void Arbol<T>::Delete(string delAp) {

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
void Arbol<T>::rotIzq(User<T> * a) {

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
void Arbol<T>::rotDer(User<T> * a) {
	//Se mover� el nodo derecho del que se convertir� en el padre
	//Se conectar� el antiguo padre al nuevo padre 
	//Se le conectar� el nodo que era derecho del anterior a su izquierda

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
void Arbol<T>::doblRotDer(User<T> * a) {

	rotIzq(a->izq);
	rotDer(a);

}


template <class T>
void Arbol<T>::doblRotIzq(User<T> * a) {

	rotDer(a->der);
	rotIzq(a);

}



template class Arbol<Persona>;