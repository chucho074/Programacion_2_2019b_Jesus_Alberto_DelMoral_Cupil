#include <iostream>
#include "User.h"

int main() {
	User *arbolito = new User("Jesus","Cupil",19);
	arbolito->der = new User("Jose", "Perez", 29);
	arbolito->izq = new User("Leo", "Suarez", 5);
	arbolito->der->izq = new User("Majo", "Tapia",4);
	arbolito->der->der = new User("Papo", "Tapia", 3);


	bool menu = true;
	
	while (menu) {
		char opcion;
		std::cin.clear();
		
		std::cout << "\n\nOpciones \n>in orden = 'i' \n>pre orden = 'p' \n>post orden = 'o'" << std::endl;
		std::cin>>opcion;
		switch (opcion) {
			case 'i': {
				arbolito->inO();
				break;
			}

			case 'p': {
				arbolito->preO();
				break;
			}

			case 'o': {
				arbolito->postO();
				break;
			}
			
			case 's': {
				std::cout << "Bye" << std::endl;
				menu = false;
				break;
			}
			default: {
				std::cout << "Error" << std::endl;
				break;
			}
		}
		
	}

	delete arbolito;
	std::cin.clear();
	std::cin.get();
	return 0;
}