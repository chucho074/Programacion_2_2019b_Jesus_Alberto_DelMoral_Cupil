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
	cout << apellido << " " << nombre << " " << edad << std::endl;
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
	cout << apellido << " " << nombre << " " << edad << std::endl;
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
	cout << apellido << " " << nombre << " " << edad << std::endl;

}

//A�adir usuario nuevo
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
