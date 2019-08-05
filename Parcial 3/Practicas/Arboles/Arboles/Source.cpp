#include <iostream>
#include "User.h"
#include "Arbol.h"

int main() {
	Arbol<Persona> * arbolito = new Arbol<Persona>();
	User<Persona> * a = new User<Persona>(Persona("J", "P", 5));
	arbolito->add(a);
	a = new User<Persona>(Persona("J", "P", 3));
	arbolito->add(a);
	a = new User<Persona>(Persona("J", "P", 7));
	arbolito->add(a);
	a = new User<Persona>(Persona("J", "P", 2));
	arbolito->add(a);
	a = new User<Persona>(Persona("J", "P", 4));
	arbolito->add(a);



	//User *b = new User("Leo", "Suarez", 5);
	//arbolito.add(b);
	//User *c = new User("Majo", "Tapia",4);
	//arbolito.add(c);
	//User *d = new User("Papo", "Tapia", 3);
	//arbolito.add(d);
	//User *f = new User("Pablo", "Perez", 19);
	//arbolito.add(f);



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
			case 'a': {
			//	User<Persona> *ser = new User<Persona>(arbolito->serch(arbolito, 5));
			//	arbolito->rotDer(ser);
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

	//delete arbolito;
	std::cin.clear();
	std::cin.get();
	return 0;
}