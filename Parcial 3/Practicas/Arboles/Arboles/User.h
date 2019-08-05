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

	//Holis
	User();
	User(T info);
	~User();

	T data;

	//User(string apellido, string nombre, unsInt edad);
	//string apellido;
	//string nombre;
	//unsInt edad;

	//Nodos siguientes
	User *izq = nullptr;
	User *der = nullptr;


	void preO();

	void inO();

	void postO();

	void add(User<T> *newUser);

	void balUser(User<T> *, unsInt, User<T> *);

	User<T> serch(User<T> *, string);

	void erase(User<T> *, string, string, int);

	bool operator < (User<T> & a);

	bool operator > (User<T> & a);

	//std::ostream & operator << (std::ostream &);
};

