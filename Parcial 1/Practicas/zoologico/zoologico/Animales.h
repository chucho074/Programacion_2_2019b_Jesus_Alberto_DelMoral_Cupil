#pragma once
#include "Librerias.h"
class ANIMALES {
protected:
	string name;
	unsigned short age;
	//HEALT healt;
public:
	bool pelaje;

	virtual void move() = 0;

	void set_name(string);
	
	void set_age(unsigned short);
	
	unsigned short return_age();
	
	string return_name();

};