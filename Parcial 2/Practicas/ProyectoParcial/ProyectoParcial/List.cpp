//Includes
#include "List.h"

//Al final xd
void SingleList::push(SingleNode * SNode) {
	if (*start != nullptr) {
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		while (Temp != nullptr) {
			Prev = Temp;
			Temp = Temp->next;
		}
		Prev->next = SNode;
	}
	else {
		*start = SNode;
	}
	s++;
}

//Por posicion
void SingleList::push(SingleNode * Nodo, unsigned int n) {
	if (n <= s) {
		unsigned int cont = 0;
		if ((*start) != nullptr) {
			SingleNode *temp = *start;	//Se igual el temporal a el incio de la lista
			SingleNode *prev = nullptr;	//Se declara nulo el previo

			while (cont < n) {	//Se itera hasta que deje de se menor al dato que se requiere
				prev = temp;	//Iguala al anterior nodo utilizado
				temp = temp->next;	//el temporal toma el nuevo valor del siguiente nodo
				cont++;	//Se aunemnta el contador
			}
			if (cont == n) {	//Cuiando encuentra el valor con el contador
				prev->next = Nodo;	//Iguala el siguiente del previo a el nodo que se quiere añadir
				Nodo->next = temp;
			}
		}
		else {
			*start = Nodo;
		}
		s++;
	}
	else {
		cout << "Out of range" << endl;
	}
}


SingleNode * SingleList::pull() {
	if ((*start) != nullptr) {
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1) {
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		return Temp;
	}
	else {
		return nullptr;
	}
}


SingleNode *SingleList::pull(unsigned int n) {
	if (n <= s) {
		if ((*start) != nullptr) {
			SingleNode * temp = *start;
			SingleNode * prev = nullptr;
			unsigned int cont = 0;

			while (cont < n) {
				prev = temp;
				temp = temp->next;
				cont++;
			}
			if (cont == n) {
				prev->next = temp->next;
				temp->next = nullptr;
				return temp;
			}
			s--;
		}
		else {
			return nullptr;
		}
	}
	else {
		cout << "Fuera de rango" << endl;
		return nullptr;
	}
}


void SingleList::remove() {
	if ((*start) != nullptr) {
		SingleNode * Temp = *start;
		SingleNode * Prev = nullptr;
		int Cont = 0;
		while (Cont < s - 1) {
			Prev = Temp;
			Temp = Temp->next;
			Cont++;
		}
		Prev->next = nullptr;
		delete Temp;
		s--;
	}
	else {
		std::cout << "No hay valores que eliminar" << std::endl;
	}

}


void SingleList::remove(unsigned int n) {
	if (n <= s) {
		if ((*start) != nullptr) {
			SingleNode * Temp = *start;
			SingleNode * Prev = nullptr;
			unsigned int cont = 0;

			while (cont < n) {
				Prev = Temp;
				Temp = Temp->next;
				cont++;
			}
			if (cont == n) {
				Prev->next = Temp->next;
				Temp->next = nullptr;
				delete Temp;
				s--;
			}
		}
	}
	else {
		std::cout << "Fuera de rango" << std::endl;
	}
}


void SingleList::clear() {
	if (*(start) != nullptr) {
		delete * start;
	}
	else {
		cout << "\nEstá vacia la lista"<<endl;
	}
}


unsigned int SingleList::size() {
	return s;
}


SingleList::~SingleList() {

}


ostream & operator << (ostream & out , const SingleList &Nodo) {
	// TODO: insertar una instrucción return aquí
	return out;
}


ostream & operator << (ostream & out, const DoubleList & DNodo) {
	return out << **DNodo.start;
}


void DoubleList::push(DoubleNode * DNodo) {
	if ((*start) != nullptr) {
		DoubleNode * Temp = *start;
		while (Temp->next != nullptr) {
			Temp->prev = Temp;
			Temp->next = Temp->next->next;
			Temp = Temp->next;

		}
		Temp->next = DNodo;
		DNodo->prev = Temp;
		Temp->next = nullptr;

	}
	else {
		*start = DNodo;
	}
	s++;
}


void DoubleList::push(DoubleNode * DNode, unsigned int n) {
	if (n < s) {
		if ((*start) != nullptr) {
			unsigned int cont = 0;
			DoubleNode * temp = *start;
			while (cont < n) {
				temp->prev = temp;
				temp->next = temp->next->next;
				temp = temp->next;
			}
			if (cont == n) {
				temp->next->prev = DNode;
				DNode->next = temp->next;
				temp->next = DNode;
				DNode->prev = temp;
			}
		}
		else {
			*start = DNode;
		}
		s++;
	}
	else {
		cout << "Fuera de rango" << endl;
	}
}


DoubleNode * DoubleList::pull() {
	return nullptr;
}


DoubleNode * DoubleList::pull(unsigned int n) {
	return nullptr;
}


void DoubleList::remove() {
	if ((*start) != nullptr) {
		DoubleNode * temp = *start;
		while (temp->next != nullptr) {
			temp->prev = temp;
			temp = temp->next;
			temp->next = temp->next->next;
		}
		temp->prev->next = nullptr;
		temp->prev = nullptr;
		delete temp;
		s--;
	}
	else {
		std::cout << "No hay valores que eliminar" << std::endl;
	}

}


void DoubleList::remove(unsigned int Pos) {
	if (Pos < s) {
		if (*start != nullptr) {
			DoubleNode * Temp = *start;
			unsigned int Cont = 0;
			while (Cont < Pos) {
				Temp->prev = Temp;
				Temp = Temp->next;
				Temp->next = Temp->next->next;
			}
			Temp->prev->next = nullptr;
			Temp->prev = nullptr;
			delete Temp;
			s--;
		}
		else {
			std::cout << "No hay valores a eliminar ya que la lista esta vacia.\n";
		}
	}
	else {
		std::cout << "La posicion especificada es invalida.\n";
	}
}


void DoubleList::clear() {
	if (*(start) != nullptr) {
		delete * start;
	}
	else {
		cout << "\nEstá vacia la lista" << endl;
	}
}


unsigned int DoubleList::size() {
	return s;
}


DoubleList::~DoubleList() {

}

