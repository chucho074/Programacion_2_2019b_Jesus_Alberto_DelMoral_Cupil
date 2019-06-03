#include "Animales.h"
		
			//Setters

//Setter name
void ANIMALES::set_name(string name_in) {
	name = name_in;
}

//Setter age
void ANIMALES::set_age(unsigned short age_in) {
	age = age_in;
}

//Setter healt
void ANIMALES::set_healt(HEALT healt_in) {
	healt = healt_in;
}

			//Getters

//Getter age
unsigned short ANIMALES::return_age() {
	return age;
}

//Getter name
string ANIMALES::return_name() {
	return name;
}

//Getter healt
HEALT ANIMALES::return_healt() {
	return healt;
}

