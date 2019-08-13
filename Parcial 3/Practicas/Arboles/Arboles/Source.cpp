#include <iostream>
#include "AVLNode.h"
#include "Bin.h"

int main() {
	Bin<Persona> * arbolito = new Bin<Persona>();
	AVLNode<Persona> * a = new AVLNode<Persona>(Persona("J", "P", 5));
	arbolito->add(a);
	a = new AVLNode<Persona>(Persona("J", "P", 3));
	arbolito->add(a);
	a = new AVLNode<Persona>(Persona("J", "P", 7));
	arbolito->add(a);
	a = new AVLNode<Persona>(Persona("J", "P", 2));
	arbolito->add(a);
	a = new AVLNode<Persona>(Persona("J", "P", 4));
	arbolito->add(a);



	//AVLNode *b = new AVLNode("Leo", "Suarez", 5);
	//arbolito.add(b);
	//AVLNode *c = new AVLNode("Majo", "Tapia",4);
	//arbolito.add(c);
	//AVLNode *d = new AVLNode("Papo", "Tapia", 3);
	//arbolito.add(d);
	//AVLNode *f = new AVLNode("Pablo", "Perez", 19);
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
			//	AVLNode<Persona> *ser = new AVLNode<Persona>(arbolito->serch(arbolito, 5));
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