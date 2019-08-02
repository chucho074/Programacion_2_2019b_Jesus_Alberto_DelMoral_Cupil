#include "Arbol.h"

//Constructor default
Arbol::Arbol() {

}

//Constructor de arbol
Arbol::Arbol(string Name, string LastName, int Age) {
	arbolito = new User(Name, LastName, Age);
}

//Destructor del arbol
Arbol::~Arbol() {
	if (arbolito != nullptr) {
		delete arbolito;
	}
}


//PreOrden Arbol
void Arbol::preO() {
	
	if (arbolito != nullptr) {
		arbolito->preO();
	}
}

//InOrden Arbol
void Arbol::inO() {
	if (arbolito != nullptr) {
		arbolito->inO();
	}
}

//PostOrden Arbol
void Arbol::postO() {

	if (arbolito != nullptr) {
		arbolito->postO();
	}
}

//Añadir usuario nuevo como arbol
void Arbol::add(User *&newUser) {
	if (arbolito != nullptr) {
		arbolito->add(newUser);
	}
	else {
		arbolito = newUser;
	}
}

void Arbol::balance(User * First) {

	if (First->izq != nullptr) {
		User * temp = First;
		cont++;
		First->balUser(First->izq, cont, nullptr);
	}
	if (First->der != nullptr) {
		cont++;
		First->balUser(First->der, cont, nullptr);
	}
}


void Arbol::erase(User * First) {
	string valSerch;
	std::cin >> valSerch;
	serch(arbolito, valSerch);

}
