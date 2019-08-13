#include "AVLNode.h"

//Constructor
template<class T>
AVLNode<T>::AVLNode(T info) {
	data = info;
	prev = nullptr;
	izq = nullptr;
	der = nullptr;
}

//Constructor
template<class T>
AVLNode<T>::AVLNode() {
	prev = nullptr;
	izq = nullptr;
	der = nullptr;
}

//Destructor del nodo
template<class T>
AVLNode<T>::~AVLNode() {
	if (izq != nullptr) {
		delete izq;
	}
	if (der != nullptr)	{
		delete der;
	}
	if (prev == nullptr) {
		delete this;
	}
}

//PreOrden
template<class T>
void AVLNode<T>::preO() {
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
void AVLNode<T>::inO() {
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
void AVLNode<T>::postO() {

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
void AVLNode<T>::add(AVLNode<T> *newAVLNode) {
	if (*this < *newAVLNode) {
		if (izq == nullptr) {
			izq = newAVLNode;
		}
		else if (izq != nullptr) {
			izq->add(newAVLNode);
		}
	}
	else if (*this > *newAVLNode) {
		if (der == nullptr) {
			der = newAVLNode;
		}
		else if (der != nullptr) {
			der->add(newAVLNode);
		}
	}
}

//Revisar si esta balanceado el arbol
template<class T>
void AVLNode<T>::balAVLNode(AVLNode<T> * Node, unsInt cont, AVLNode<T> * temp) {

	Nivel = cont;
	if (izq != nullptr) {
		cont++;
		izq->balAVLNode(Node->izq, cont, Node);
		balIzq = izq->pesoAct;
		pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
		temp->balIzq = pesoAct;
	}	
	if (der != nullptr) {
		cont++;
		der->balAVLNode(Node->der, cont, Node);
		pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
		temp->balDer = pesoAct;
	}
	else {
		temp->pesoAct = temp->Nivel;
	}

}

//Busqueda en un valor
template<class T>
AVLNode<T> AVLNode<T>::serch(AVLNode * Node, T value) {

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
		return *Node;
	}

}

//Borrado de un nodo
//template<class T>
//void AVLNode<T>::erase(T delData) {
//	
//	AVLNode * temp = serch(this, delData);	//Nodo con el valor buscado
//	
//	if () {
//	
//	}
//
//	//AVLNode * temp = nullptr;		//Nodo con el valor buscado
//	////Busca al nodo
//	//if ((der != nullptr) && (izq != nullptr)) {
//	//	if (!(data == delData)) {	//Si no es en el que estamos
//	//		if (data < delData) {	//Revisar el de la izquierda en caso de ser menor
//	//			if (izq->data == delData) {	//Revisa que el apellido de el nodo de la izq. sea igual al recibido
//	//				temp = izq;	//Lo guarda en el temporal
//	//			}
//	//			
//	//		}
//	//		else if (data > delData) {	//Revisa el de la derecha en caso de ser mayor
//	//
//	//		}
//	//	}
//	//}
//	//else {
//	//	delete this;
//	//}
//	delete temp;
//}

//Sobrecarga del operador menor que
template<class T>
bool AVLNode<T>::operator < (AVLNode<T>& a)
{
	return data < a.data;
}

//Sobrecarga del operador menor que 
//template<class T>
//bool AVLNode<T>::operator < (AVLNode<T> & a) {
//	
//	if (apellido != a.apellido) {
//		if (a.apellido > apellido) {
//			return apellido < a.apellido;
//		}
//	}
//
//	else if (nombre != a.nombre) {
//		if (a.nombre > nombre) {
//			return nombre < a.nombre;
//		}
//	}
//
//	else if (edad != a.edad) {
//		if (a.edad > edad) {
//			return edad < a.edad;
//		}
//	}
//
//	else {
//		return !(apellido < a.apellido);
//	}
//
//}

//Sobrecarga de operador mayor que 
template<class T>
bool AVLNode<T>::operator > (AVLNode & a) {

	//if (apellido != a.apellido) {
	//	if (a.apellido < apellido) {
	//		return apellido > a.apellido;
	//	}
	//}
	//
	//else if (nombre != a.nombre) {
	//	if (a.nombre < nombre) {
	//		return nombre > a.nombre;
	//	}
	//}
	//
	//else if (edad != a.edad) {
	//	if (a.edad < edad) {
	//		return edad > a.edad;
	//	}
	//}
	//
	//else {
	//	return !(apellido > a.apellido);
	//}
	
	return data > a.data;
}

////Sobrecarga de operador de salida
//template<class T>
//std::ostream & AVLNode<T>::operator << (std::ostream & out) {
//	out << nombre << " " << apellido << " " << edad << std::endl;
//	return out;
//}



template class AVLNode<Persona>;