#pragma once
#include "Librerias.h"

class NodoDoble {
public:
	//string name;
	int age;
	NodoDoble *next;
	NodoDoble *before;

	int m_data;
	NodoDoble *m_Prev;
	NodoDoble *m_Next;

	NodoDoble();

	NodoDoble(NodoDoble * Prev, int Dato);
	~NodoDoble();
};

