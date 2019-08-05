#include "Persona.h"



Persona::Persona() {
	cin >> nombre;
	cin >> apellido;
	cin >> edad;
}

Persona::Persona(std::string ape, std::string nom, unsInt eda) {
	apellido = ape;
	nombre = nom;
	edad = eda;
}


Persona::~Persona() {

}



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

bool Persona::operator == (Persona & P) {
	if (apellido == P.apellido && nombre == P.nombre && edad == P.edad) {
		return true;
	}
	else {
		return false;
	}
}

bool Persona::operator == (std::string ap) {
	return apellido == ap;
}

bool Persona::operator < (std::string s) {
	return apellido < s;
}

bool Persona::operator > (std::string s) {
	return apellido > s;
}

bool Persona::operator<(Persona & Per)
{
	return apellido < Per.apellido;
}


std::ostream & operator << (std::ostream & os, Persona & P) {
	os << "\t" << P.apellido << "\n\t" << P.nombre << "\n\t" << P.edad << std::endl;
	return os;
}