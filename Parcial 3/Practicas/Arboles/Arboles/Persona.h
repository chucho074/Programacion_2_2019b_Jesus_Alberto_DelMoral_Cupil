#pragma once
#include <string>
#include <iostream>

using std::cin;
typedef unsigned int unsInt;

class Persona {
public:
	Persona();
	Persona(std::string apellido, std::string nombre, unsInt edad);
	~Persona();

	std::string apellido;
	std::string nombre;
	unsInt edad;
	
	//Los operadores 
	bool operator > (Persona &);
	bool operator == (Persona & Persona);
	bool operator == (std::string s);
	bool operator < (std::string s);
	bool operator > (std::string s);
	bool operator < (Persona & Per);
	friend std::ostream & operator << (std::ostream & os, Persona & P);
};

