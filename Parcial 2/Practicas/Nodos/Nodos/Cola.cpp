#include "Cola.h"



void Cola::addCola(Nodo *&front, Nodo *&back, int n, string s) {
	Nodo * NewNodo = new Nodo();
	NewNodo->age = n;
	NewNodo->next = NULL;

	if (EmptyCola(front)) {
		front = NewNodo;

	}
	else {
		back->next = NewNodo;
	}

	back = NewNodo;

}

Cola::Cola()
{
}


Cola::~Cola()
{
}
