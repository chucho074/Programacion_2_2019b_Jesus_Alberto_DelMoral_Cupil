#include <iostream>
#include "User.h"

int main() {
	User *arbolito = new User("Jesus","Cupil",19);
	arbolito->der = new User("Jose", "Perez", 29);
	arbolito->izq = new User("Leo", "Suarez", 5);
	arbolito->der->izq = new User("Majo", "Tapia",4);
	arbolito->der->der = new User("Papo", "Tapia", 3);

	arbolito->inO();
	delete arbolito;

	std::cin.clear();
	std::cin.get();
	return 0;
}