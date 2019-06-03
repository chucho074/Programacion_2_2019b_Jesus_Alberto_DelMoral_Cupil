#pragma once
#include "Librerias.h"

//Enum de vida
enum HEALT {
	good,
	bad,
	critical
};

class ANIMALES {
protected:
	string name;
	unsigned short age;
	HEALT healt;
public:
	bool pelaje;

	virtual void move() = 0;

	//Setters
	void set_name(string);
	
	void set_age(unsigned short);

	void set_healt(HEALT);

	//Getters
	unsigned short return_age();
	
	string return_name();

	HEALT return_healt();

};