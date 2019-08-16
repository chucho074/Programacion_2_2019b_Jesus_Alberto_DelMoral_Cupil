#include <iostream>
#include "AVL.h"
#include "AVLNode.h"
#include "Bin.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	AVL<Persona> * arbolito = new AVL<Persona>();
	AVLNode<Persona> * a = new AVLNode<Persona>(Persona("J", "P", 5));
	arbolito->add(a);
	a = new AVLNode<Persona>(Persona("J", "P", 3));
	arbolito->add(a);
	string x;
	string y;
	int z;
	cin >> x;
	cin >> y;
	cin >> z;
	a = new AVLNode<Persona>(Persona(x, y, z));
	arbolito->add(a);
	//a = new BinNode<Persona>(Persona("J", "P", 2));
	//arbolito->add(a);
	//a = new BinNode<Persona>(Persona("J", "P", 4));
	//arbolito->add(a);


	bool menu = true;
	
	while (menu) {
		char opcion;
		cin.clear();
		
		cout << "\n\nOpciones \n>in orden = 'i' \n"
			 << ">pre orden = 'p' \n>post orden = 'o'" << endl;
		cin>>opcion;
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
			
				break;
			}
			
			case 's': {
				cout << "Bye" << endl;
				menu = false;
				break;
			}

			default: {
				cout << "Error" << endl;
				break;
			}
		}
		
	}


	cin.clear();
	cin.get();
	return 0;
}