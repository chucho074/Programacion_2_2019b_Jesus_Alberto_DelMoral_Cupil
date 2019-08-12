#include "Persona.h"


	//Constructores

//Default
Persona::Persona() {
	
}
//Con parametros para crear una persona
Persona::Persona(std::string ape, std::string nom, unsInt eda) {
	apellido = ape;
	nombre = nom;
	edad = eda;
}

//Destructor
Persona::~Persona() {

}

	//Operadores

//Mayor que (Por nodos)
bool Persona::operator > (Persona & P) {
	if (apellido != P.apellido) {
		if (P.apellido < apellido) {
			return apellido > P.apellido;
		}
	}
	
	else if (nombre != P.nombre) {
		if (P.nombre < nombre) {
			return nombre > P.nombre;
		}
	}
	
	else if (edad != P.edad) {
		if (P.edad < edad) {
			return edad > P.edad;
		}
	}
	
	else {
		return !(apellido > P.apellido);
	}
}

//Menor que (Por nodos)
bool Persona::operator < (Persona & Per) {
	return apellido < Per.apellido;
}

//Igual que (Por nodos)
bool Persona::operator == (Persona & P) {
	if (apellido == P.apellido && nombre == P.nombre && edad == P.edad) {
		return true;
	}
	else {
		return false;
	}
}

//Mayor que (Solo por apellido)
bool Persona::operator > (std::string s) {
	return apellido > s;
}

//Menor que (Solo por apellido)
bool Persona::operator < (std::string s) {
	return apellido < s;
}

//Igual que (Solo por apellido)
bool Persona::operator == (std::string ap) {
	return apellido == ap;
}

//Imprimir datos del tipo de dato
std::ostream & operator << (std::ostream & os, Persona & P) {
	os << "\t" << P.apellido << "\n\t" << P.nombre << "\n\t" << P.edad << std::endl;
	return os;
}