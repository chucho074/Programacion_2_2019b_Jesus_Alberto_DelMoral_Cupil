#include "User.h"



User::User(string ape, string nom, int eda) {
	apellido = ape;
	nombre = nom;
	edad = eda;
}


User::~User() {
	if (izq != nullptr) {
		delete izq;
	}
	if (der != nullptr)	{
		delete der;
	}
}

void User::preO() {

	
	cout << apellido << " " << nombre << " " << edad << std::endl;
	if (izq != nullptr) {
		 izq->preO();
	}
	if (der != nullptr) {
		der->preO();
	}
}

void User::inO() {

	if (izq != nullptr) {
		izq->preO();
	}
	cout << apellido << " " << nombre << " " << edad << std::endl;
	if (der != nullptr) {
		der->preO();
	}

	
}

void User::postO() {

	if (izq != nullptr) {
		izq->preO();
	}
	if (der != nullptr) {
		der->preO();
	}
	cout << apellido << " " << nombre << " " << edad << std::endl;

}
