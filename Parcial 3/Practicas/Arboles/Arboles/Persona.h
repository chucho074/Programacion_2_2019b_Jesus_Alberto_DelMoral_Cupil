#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::ostream;
typedef unsigned int unsInt;			//Definicion para uso del tipo de dato unsInt

class Persona {

public:

	Persona();							//Constructor default
	Persona(string, string, unsInt);	//Constructor con parametros
	~Persona();							//Destructor

	//Variables / datos
	string apellido;
	string nombre;
	unsInt edad;
	
	//Operadores Sobrecargados
	bool operator > (Persona &);		//Mayor que (Por nodos)
	bool operator < (Persona &);		//Menor que (Por nodos)
	bool operator == (Persona &);		//Igual que (Por nodos)
	bool operator > (string);			//Mayor que (Solo por apellido)
	bool operator < (string);			//Menor que (Solo por apellido)
	bool operator == (string);			//Igual que (Solo por apellido)
	friend ostream & operator << (ostream &, Persona &);	//Imprimir datos del tipo de dato

};