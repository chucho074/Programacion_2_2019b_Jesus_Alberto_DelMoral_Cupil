#include "User.h"


//Constructor
User::User() {

}

User::User(string ape, string nom, unsInt eda) {
	apellido = ape;
	nombre = nom;
	edad = eda;
}


//Destructor del arbol
User::~User() {
	if (izq != nullptr) {
		delete izq;
	}
	if (der != nullptr)	{
		delete der;
	}
}

//PreOrden
void User::preO() {
	cout << this;
	if (izq != nullptr) {
		 izq->preO();
	}
	else if (der != nullptr) {
		der->preO();
	}
}

//InOrden
void User::inO() {
	if (izq != nullptr) {
		izq->inO();
	}
	cout << this;
	if (der != nullptr) {
		der->inO();
	}
}

//PostOrden
void User::postO() {

	if (izq != nullptr) {
		izq->postO();
	}
	else if (der != nullptr) {
		der->postO();
	}
	cout << this;

}

//Añadir usuario nuevo
void User::add(User *newUser) {
	if (newUser->apellido < apellido) {
		if (izq == nullptr) {
			izq = newUser;
		}
		else if (izq != nullptr) {
			izq->add(newUser);
		}
	}
	else if (newUser->apellido > apellido) {
		if (der == nullptr) {
			der = newUser;
		}
		else if (der != nullptr) {
			der->add(newUser);
		}
	}
	else {
		if (newUser->nombre > nombre) {
			if (izq != nullptr) {
				izq->add(newUser);
			}
			else {
				izq = newUser;
			}
		}
		else if (newUser->nombre < nombre) {
			if (der != nullptr) {
				der->add(newUser);
			}
			else {
				der = newUser;
			}
		}
		else {
			if (newUser->edad > edad) {
				if (izq != nullptr) {
					izq->add(newUser);
				}
				else {
					izq = newUser;
				}
			}
			else if (newUser->edad < edad) {
				if (der != nullptr) {
					der->add(newUser);
				}
				else {
					der = newUser;
				}
			}
		}
	}
}


void User::balUser(User * Node, unsInt cont, User * temp) {

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


void User::serch(User * Node, string value) {
	//Si no es igual al primero
	if (value != Node->apellido) {
		//Si es menor que ese
		if (value < Node->apellido) {
			serch(izq, value);
		}
		//Si es mayor que ese
		if (!(value < Node->apellido)) {
			serch(der, value);
		}

	}
	//Devolvemos el valor de 
	else {
		
	}

}

void User::erase() {



}




bool User::operator < (User & a) {
	// TODO: insertar una instrucción return aquí
	if (apellido != a.apellido) {
		if (!(a.apellido < apellido)) {
			return apellido < a.apellido;
		}
	}

	else if (nombre != a.nombre) {
		if (!(a.nombre < nombre)) {
			return nombre < a.nombre;
		}
	}

	else if (edad != a.edad) {
		if (!(a.edad < edad)) {
			return edad < a.edad;
		}
	}

	else {
		return !(apellido < a.apellido);
	}

}


std::ostream & User::operator << (std::ostream & out) {
	out << nombre << " " << apellido << " " << edad << std::endl;
	return out;
}
