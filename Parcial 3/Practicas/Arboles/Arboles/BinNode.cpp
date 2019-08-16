#include "BinNode.h"

//Constructor
template <class T>
BinNode<T>::BinNode() {

	prev = nullptr;
	izq = nullptr;
	der = nullptr;

}

//Constructor con parametros
template <class T>
BinNode<T>::BinNode(T info) {

	data = info;
	prev = nullptr;
	izq = nullptr;
	der = nullptr;

}

//Destructor
template <class T>
BinNode<T>::~BinNode() {

	if (izq != nullptr) {
		delete izq;
	}
	if (der != nullptr) {
		delete der;
	}
	if (prev == nullptr) {
		delete this;
	}

}



				//Funciones



//PreOrden
template<class T>
void BinNode<T>::preO() {
	cout << data;
	if (izq != nullptr) {
		izq->preO();
	}
	else if (der != nullptr) {
		der->preO();
	}
}

//InOrden
template<class T>
void BinNode<T>::inO() {
	if (izq != nullptr) {
		izq->inO();
	}
	cout << data;
	if (der != nullptr) {
		der->inO();
	}
}

//PostOrden
template<class T>
void BinNode<T>::postO() {

	if (izq != nullptr) {
		izq->postO();
	}
	else if (der != nullptr) {
		der->postO();
	}
	cout << data;

}

//Añadir usuario nuevo
template<class T>
void BinNode<T>::add(BinNode<T> *newBinNode) {
	if (*this < *newBinNode) {
		if (izq == nullptr) {
			izq = newBinNode;
			newBinNode->prev = this;
		}
		else if (izq != nullptr) {
			izq->add(newBinNode);
		}
	}
	else if (*this > *newBinNode) {
		if (der == nullptr) {
			der = newBinNode;
			newBinNode->prev = this;
		}
		else if (der != nullptr) {
			der->add(newBinNode);
		}
	}
}

//Busqueda en un valor
template<class T>
BinNode<T> * BinNode<T>::serch(BinNode * Node, T value) {

	//Si no es igual al primero
	if (!(Node->data == value)) {
		//Si es menor que ese
		if (Node->data > value) {
			serch(izq, value);
		}
		//Si es mayor que ese
		else if (Node->data < value) {
			serch(der, value);
		}
	}
	//Devolvemos el valor de 
	else {
		return Node;
	}

}

//Borrado de un nodo
template<class T>
void BinNode<T>::erase(T delData) {

	BinNode * temp = serch(this, delData);    //Nodo con el valor buscado
	BinNode * temp2 = nullptr;
	BinNode * temp3 = nullptr;

	if (temp->prev->izq == temp) {
		//Toma el nodo que está mas a la derecha
		temp2 = lastNodeDer(temp);
		temp2->prev->der = nullptr;
		temp2->prev = temp->prev;
		temp2->izq = temp->der  ;
		if (temp->der->izq != nullptr) {
			temp3 = lastNodeIzq(temp->der);
			temp3->izq = temp->izq;
		}
		else {
			temp->der = temp->izq;
		}

		temp->izq = nullptr;
		temp->der = nullptr;
		delete temp;
	}

	else if (temp->prev->der == temp) {
		//Toma el nodo que está más a la izquierda
		temp2 = lastNodeIzq(temp);
		temp2->prev = nullptr;
		temp2->prev = temp->prev;
		temp2->der = temp->izq;
		if (temp->izq->der != nullptr) {
			temp3 = lastNodeDer(temp->izq);
			temp3->der = temp->der;
		}
		else {
			temp->izq = temp->der;
		}

		temp->izq = nullptr;
		temp->der = nullptr;
		delete temp;
	}


	delete temp;
}

//Funcion para buscar el mas a la derecha
template<class T>
BinNode<T> * BinNode<T>::lastNodeDer(BinNode<T> * Node) {

	if (Node->der != nullptr) {
		lastNodeDer(Node->der);
	}

	else {
		return Node;
	}

}

//Funcion para buscar el mas a la izquierda
template<class T>
BinNode<T> * BinNode<T>::lastNodeIzq(BinNode<T> * Node) {

	if (Node->izq != nullptr) {
		lastNodeDer(Node->izq);
	}

	else {
		return Node;
	}

}



			//Sobrecarga de operadores



//Sobrecarga del operador menor que
template<class T>
bool BinNode<T>::operator < (BinNode<T>& a)
{
	return data < a.data;
}

//Sobrecarga de operador mayor que 
template<class T>
bool BinNode<T>::operator > (BinNode & a) {

	return data > a.data;
}




//Templates
template class BinNode<Persona>;	//Clase BinNode con tipo de dato 'Persona'
//template class Nodes<Persona>;		//Clase Nodes con tipo de dato 'Persona'

//template class BinNode<int>;		//Clase BinNode con tipo de dato 'int'
//template class Nodes<int>;			//Clase Nodes con tipo de dato 'int'