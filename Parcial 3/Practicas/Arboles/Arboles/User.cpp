#include "User.h"


//Constructor
User::User(string ape, string nom, int eda) {
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


void User::inO() {
	if (izq != nullptr) {
		izq->inO();
	}
	cout << apellido << " " << nombre << " " << edad << std::endl;
	if (der != nullptr) {
		der->inO();
	}
}


void User::postO() {

	if (izq != nullptr) {
		izq->postO();
	}
	else if (der != nullptr) {
		der->postO();
	}
	cout << apellido << " " << nombre << " " << edad << std::endl;

}


void User::add(User *newUser) {
	if (newUser->apellido < apellido) {
		if (izq == nullptr) {
			izq = newUser;
		}
		else if (izq != nullptr) {
			izq = newUser;
		}
	}
	else if (newUser->apellido > apellido) {
		if (der == nullptr) {
			der = newUser;
		}
		else if (der != nullptr) {
			der = newUser;
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
