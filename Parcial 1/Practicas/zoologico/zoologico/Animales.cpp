#include "Animales.h"

//Setter name
void ANIMALES::set_name(string name_in) {
	name = name_in;
}

//Setter age
void ANIMALES::set_age(unsigned short age_in) {
	age = age_in;
}

//Getter age
unsigned short ANIMALES::return_age() {
	return age;
}

//Getter name
string ANIMALES::return_name() {
	return name;
}

//Enum de vida
enum HEALT {
	good,
	bad,
	critical
};