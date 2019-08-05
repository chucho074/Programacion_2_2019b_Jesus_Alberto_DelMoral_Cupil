#include "User.h"


template<class T>
User<T>::User(T info) {
	data = info;
	izq = nullptr;
	der = nullptr;
}

//Constructor
template<class T>
User<T>::User() {
	izq = nullptr;
	der = nullptr;
}

//
//template<class T>
//User<T>::User(string ape, string nom, unsInt eda) {
//	apellido = ape;
//	nombre = nom;
//	edad = eda;
//}

//Destructor del arbol
template<class T>
User<T>::~User() {
	if (izq != nullptr) {
		delete izq;
	}
	if (der != nullptr)	{
		delete der;
	}
}

//PreOrden
template<class T>
void User<T>::preO() {
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
void User<T>::inO() {
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
void User<T>::postO() {

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
void User<T>::add(User<T> *newUser) {
	if (*this < *newUser) {
		if (izq == nullptr) {
			izq = newUser;
		}
		else if (izq != nullptr) {
			izq->add(newUser);
		}
	}
	else if (*this > *newUser) {
		if (der == nullptr) {
			der = newUser;
		}
		else if (der != nullptr) {
			der->add(newUser);
		}
	}
}

//Revisar si esta balanceado el arbol
template<class T>
void User<T>::balUser(User<T> * Node, unsInt cont, User<T> * temp) {

	Nivel = cont;
	if (izq != nullptr) {
		cont++;
		izq->balUser(Node->izq, cont, Node);
		balIzq = izq->pesoAct;
		pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
		temp->balIzq = pesoAct;
	}	
	if (der != nullptr) {
		cont++;
		der->balUser(Node->der, cont, Node);
		pesoAct = ((Nivel * balDer) + (Nivel * balIzq));
		temp->balDer = pesoAct;
	}
	else {
		temp->pesoAct = temp->Nivel;
	}
}

//Busqueda en un valor
template<class T>
User<T> User<T>::serch(User * Node, string value) {

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
template<class T>
void User<T>::erase(User<T> * Node, string delAp, string delNa, int delAge) {
	
	User * temp = nullptr;	//Nodo con el valor buscado
	//Busca al nodo
	if ((der != nullptr) && (izq != nullptr)) {
		if (!(data == delAp)) {	//Si no es en el que estamos
			if (data < delAp) {	//Revisar el de la izquierda en caso de ser menor
				if (izq->data == delAp) {	//Revisa que el apellido de el nodo de la izq. sea igual al recibido
					temp = izq;	//Lo guarda en el temporal
				}
				
			}
			else if (data > delAp) {	//Revisa el de la derecha en caso de ser mayor

			}
		}
	}
	else {
		delete Node;
	}
	delete temp;
}

template<class T>
bool User<T>::operator<(User<T>& a)
{
	return data < a.data;
}

//Sobrecarga del operador menor que 
//template<class T>
//bool User<T>::operator < (User<T> & a) {
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
bool User<T>::operator > (User & a) {

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
//std::ostream & User<T>::operator << (std::ostream & out) {
//	out << nombre << " " << apellido << " " << edad << std::endl;
//	return out;
//}


template class User<Persona>;