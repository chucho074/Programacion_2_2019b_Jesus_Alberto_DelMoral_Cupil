#include <iostream>
#include "AVL.h"
#include "AVLNode.h"
#include "Bin.h"
#include "BinNode.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
	cout << "Que tipo de arbol desea" << "\n >Arbol binario = 1<\n >Arbol AVL = 2<" << endl;
	char menuArbol;
	cin >> menuArbol;
	switch (menuArbol) {
	case 1: {
		Bin<Persona> * arbolito = new Bin<Persona>();

		bool menu = true;		//Determinante del menu
		while (menu) {
			char opcion;
			cin.clear();

			cout << "\n\nOpciones \n>in orden = 'i' \n"
				<< ">pre orden = 'p' \n>post orden = 'o'" << endl;
			cin >> opcion;
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
				BinNode<Persona> * a = new BinNode<Persona>(Persona());
				arbolito->add(a);
				break;
			}

			case 's': {
				cout << "Bye" << endl;
				menu = false;		//Se cambia la funcionalidad del programa
				break;
			}

			default: {
				cout << "Error" << endl;
				break;
			}
			}

		}
	}
	case 2: {
		AVL<Persona> * arbolito = new AVL<Persona>();

		bool menu = true;

		while (menu) {
			char opcion;
			cin.clear();

			cout << "\n\nOpciones \n>in orden = 'i' \n"
				<< ">pre orden = 'p' \n>post orden = 'o'" << endl;
			cin >> opcion;
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
	}
	default:
		break;
	}


	cin.clear();
	cin.get();
	return 0;
}