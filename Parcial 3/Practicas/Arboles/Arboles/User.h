#pragma once
#include <string>
#include <iostream>
#include "Persona.h"

using std::string;
using std::cout;

typedef unsigned int unsInt;

template <class T>
class User {
private:
	unsInt Nivel = 0;
	unsInt balIzq = 0;
	unsInt balDer = 0;
	unsInt pesoAct = 0;

public:

	//Constructores
	User();
	User(T info);

	//Destructor
	~User();

	T data;

	//Nodo previo
	User * prev = nullptr;

	//Nodos siguientes
	User *izq = nullptr;
	User *der = nullptr;


	void preO();

	void inO();

	void postO();

	void add(User<T>*);

	void balUser(User<T>*, unsInt, User<T>*);

	User<T> serch(User<T>*, T);

	void erase(T delData);

	//Sobrecargas de operadores

	bool operator < (User<T> & a);

	bool operator > (User<T> & a);

	//std::ostream & operator << (std::ostream &);
};

