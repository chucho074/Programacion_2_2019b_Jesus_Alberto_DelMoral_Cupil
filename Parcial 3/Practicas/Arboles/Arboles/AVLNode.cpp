#include "AVLNode.h"

//Constructor
template<class T>
AVLNode<T>::AVLNode() {
	prev = nullptr;
	izq = nullptr;
	der = nullptr;
}

//Constructor con parametros
template<class T>
AVLNode<T>::AVLNode(T info) {
	data = info;
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



			//Funciones



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
void AVLNode<T>::add(AVLNode<T> *newAVLNode) {	//Agregar Balanceo automatico
	if (*this < *newAVLNode) {
		if (izq == nullptr) {
			izq = newAVLNode;
			newAVLNode->prev = this;
		}
		else if (izq != nullptr) {
			izq->add(newAVLNode);
		}
	}
	else if (*this > *newAVLNode) {
		if (der == nullptr) {
			der = newAVLNode;
			newAVLNode->prev = this;

		}
		else if (der != nullptr) {
			der->add(newAVLNode);
		}
	}
}

//Revisar si esta balanceado el arbol
template<class T>
void AVLNode<T>::balAVLNode(AVLNode<T> * Node, unsInt cont) {
	if (prev != nullptr) {

		Nivel = cont;
		if (izq != nullptr) {
			cont++;
			izq->balAVLNode(Node->izq, cont);
			balIzq = izq->pesoAct;
			pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
			prev->balIzq = pesoAct;
			BF = ((izq->Nivel) - (der->Nivel));
		}
		if (der != nullptr) {
			cont++;
			der->balAVLNode(Node->der, cont);
			balDer = der->pesoAct;
			pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
			prev->balDer = pesoAct;
			BF = ((izq->Nivel) - (der->Nivel));
		}
		else {
			pesoAct = Nivel + 1;
		}
	}
	//Sea la raiz
	else {
		Nivel = cont;
		if (izq != nullptr) {
			cont++;
			izq->balAVLNode(Node->izq, cont);
			balIzq = izq->pesoAct;
			pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
			BF = ((izq->Nivel) - (der->Nivel));

			
		}
		if (der != nullptr) {
			cont++;
			der->balAVLNode(Node->der, cont);
			pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
			BF = ((izq->Nivel) - (der->Nivel));
			
		}
		
	}

}

//Busqueda en un valor
template<class T>
AVLNode<T> * AVLNode<T>::serch(AVLNode * Node, T value) {

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
void AVLNode<T>::erase(T delData) {

	AVLNode * temp = serch(this, delData);    //Nodo con el valor buscado
	AVLNode * temp2 = nullptr;
	AVLNode * temp3 = nullptr;

	if (temp->prev->izq == temp) {
		//Toma el nodo que está mas a la derecha
		temp2 = lastNodeDer(temp);
		temp2->prev->der = nullptr;
		temp2->prev = temp->prev;
		temp2->izq = temp->der;
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
AVLNode<T> * AVLNode<T>::lastNodeDer(AVLNode<T> * Node) {

	if (Node->der != nullptr) {
		lastNodeDer(Node->der);
	}

	else {
		return Node;
	}

}

//Funcion para buscar el mas a la izquierda
template<class T>
AVLNode<T> * AVLNode<T>::lastNodeIzq(AVLNode<T> * Node) {

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
bool AVLNode<T>::operator < (AVLNode<T>& a)
{
	return data < a.data;
}

//Sobrecarga de operador mayor que 
template<class T>
bool AVLNode<T>::operator > (AVLNode & a) {

	return data > a.data;
}


//Templates
template class AVLNode<Persona>;	//Clase AVLNode con tipo de dato 'Persona'
//template class Nodes<Persona>;		//Clase Nodes con tipo de dato 'Persona'

//template class AVLNode<int>;	//Clase AVLNode con tipo de dato 'int'
//template class Nodes<int>;		//Clase Nodes con tipo de dato 'int'