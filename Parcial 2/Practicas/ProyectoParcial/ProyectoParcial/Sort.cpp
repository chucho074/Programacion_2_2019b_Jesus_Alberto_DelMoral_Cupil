//Includes
#include "Sort.h"

		//Funciones

//Swap de nodo simple
SingleNode * Sort::swap(SingleNode * Ptr1, SingleNode * Ptr2) {	//Cambiar el Nodo por el de la derecha o siguiente
	Ptr1->next = Ptr2->next;	//Guarda la direccion de memoria de lo apuntado del segundo puntero
	Ptr2->next = Ptr1;	//Iguala la direccion de memoria del segundo puntero a la del primero (apunta a el)
	return Ptr2;	//Devuelve el segundo Puntero ya cambiado
}

//Swap de nodo doble
DoubleNode * Sort::swap(DoubleNode * DPtr1, DoubleNode * DPtr2) {	//Cambiar el Nodo por el siguiente
	DPtr1->prev->next = DPtr2;
	DPtr1->next = DPtr2->next;
	DPtr2->next = DPtr1;
	DPtr2->prev = DPtr1->prev;
	return DPtr2;
}

void Sort::bubble(SingleList & List) {

	SingleNode ** iter;
	SingleNode * a, *b;
	unsigned int size = (*start)->size();
	bool swapped = false;

	for (unsigned int i = 0; i < size; i++) {
		iter = start;
		for (unsigned int j = 0; j < size - i - 1; j++) {
			a = *iter;
			b = a->next;

			if (*a > *b) {
				swapped = true;
				*iter = swap(a, b);
			}

			iter = &(*iter)->next;
		}
		if (!swapped)
			break;
	}
}

void Sort::bubble(DoubleList & DNodo) {

}

void Sort::quick(SingleList & Nodo) {

}

void Sort::quick(DoubleList &DNodo) {

}
