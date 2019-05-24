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

class invertebrados : public ANIMALES {
public:
	virtual void move() = 0;
	bool concha;
	bool alas;
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

class peces : public vertebrados {
public: 
	unsigned short num_aletas;
	virtual void move() = 0;
};

class pulpo : invertebrados {
public:
	pulpo() {
		concha = false;
		alas = false;

	}
	void move(){ }
};

class lobo : public mamiferos {
public:
	lobo() {
		pelaje = true;
		bones = 320;
	}
	void move() { };
};

class leon : public mamiferos {
public:
	leon() {
		pelaje = true;
		bones = 525;
	}
	void move() { };
};

class tiburon : public peces {
public:
	tiburon() {
		num_aletas = 6;
	}
	void move() { }
};

class medusa : public invertebrados {
public:
	medusa() {
		concha = false;
	}
	void move() { };
};

class babosa : invertebrados {
public:
	babosa() {
		concha = true;
		alas = false;
		}
	void move() { }
};





int main() {
	lobo Lobito;
	pulpo Pulpito;
	leon Leoncito;
	tiburon Tiburoncin;
	medusa Medusita;
	babosa Babosita;

		
	return 0;
}