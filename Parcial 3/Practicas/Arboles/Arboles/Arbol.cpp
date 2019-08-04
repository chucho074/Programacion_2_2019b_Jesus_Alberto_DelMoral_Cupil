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

//
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

//
void Arbol::erase(User * First) {
	
	string valSerch;
	std::cin >> valSerch;
	serch(arbolito, valSerch);


}

//Borrado 2, que si srive
void Arbol::Delete(string delAp) {

	User * temp1 = nullptr;
	User * temp2 = nullptr;
	temp1 = arbolito;
	
	while (temp1 != nullptr) {
		
		if (delAp > temp1->apellido) {

			if (temp1->der != nullptr) {

				temp2 = temp1;
				temp1 = temp1->der;

			}

		}


		else if (delAp == temp1->apellido) {

			if (temp1->izq != nullptr && temp1->der == nullptr) {

				if (temp2 != nullptr) {

					if (temp2->izq == temp1) {

						temp2->izq = temp1->izq;

					}

					else if (temp2->der == temp1) {

						temp2->der = temp1->izq;

					}

					temp1->izq = nullptr;
					delete temp1;

				}

			}

			else if (temp1->izq == nullptr && temp1->der == nullptr) {
				
				if (temp2 != nullptr) {
					
					if (temp2->der == temp1) {

						temp2->der = nullptr;

					}

					else if (temp2->izq == temp1) {

						temp2->izq = nullptr;

					}

				}

				delete temp1;
				break;

			}

			else if (temp1->izq == nullptr && temp1->der != nullptr) {
				
				if (temp2 != nullptr) {

					if (temp2->izq == temp1) {

						temp2->izq = temp1->der;

					}

					else if (temp2->der == temp1) {

						temp2->der = temp1->der;

					}

					temp1->der = nullptr;
					delete temp1;
				
				}
				
			}
			
			
		}

		else {
			
			if (temp1->izq != nullptr) {

				temp2 = temp1;
				temp1 = temp1->izq;

			}

		}
	}
}