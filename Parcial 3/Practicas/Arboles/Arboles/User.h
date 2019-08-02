#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;

typedef unsigned int unsInt;

class User {
private:
	unsInt Nivel = 0;
	unsInt balIzq = 0;
	unsInt balDer = 0;
	unsInt pesoAct = 0;



public:
	User();
	User(string apellido, string nombre, unsInt edad);
	string apellido;
	string nombre;
	unsInt edad;

	//Nodos siguientes
	User *izq = nullptr;
	User *der = nullptr;

	~User();



	void preO();

	void inO();

	void postO();

	void add(User *newUser);

	void balUser(User *, unsInt, User *);

	void serch(User *, string);

	void erase();

	bool operator < (User & a);

	std::ostream & operator << (std::ostream &);
};

