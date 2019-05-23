#include <iostream>
#include <string>

/*class mamiferos : public vertebrados {};
class peces : public vertebrados {};
class aves : public vertebrados {};
class reptiles : public vertebrados {};
class anfibios : public vertebrados{};


class carnivoros {};
class herbivoros {};
class omnivoros {};

class vertebrados : public ANIMALES{};
class invertebrados : public ANIMALES{};*/

class ANIMALES {
public:
	enum sexo {
		Macho,
		Hembra,
		asexual
	};

	bool pelaje;

	virtual void move() = 0;

};

class vertebrados : public ANIMALES {
public:
	unsigned short bones;
	virtual void move() = 0;
};

class mamiferos : public vertebrados {
public:
	bool pelaje;
};


class lobo : public mamiferos {
public:
	lobo() {
		pelaje = true;
		bones = 3250;
	}
	void move() {}
};








int main() {
	lobo puto;
	
	return 0;
}