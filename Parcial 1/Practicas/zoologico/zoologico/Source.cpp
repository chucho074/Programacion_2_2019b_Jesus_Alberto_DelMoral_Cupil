#include <iostream>
#include <string>
#include <vector>

class ANIMALES {
protected:
	std::string name;
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
	bool concha;
	bool alas;
	void move() {};
};

class vertebrados : public ANIMALES {
public:
	unsigned short bones;
	
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

class pulpo : public invertebrados {
public:
	pulpo() {
		name = "Pulpi";
		concha = false;
		alas = false;
		pelaje = false;

	}
	void move(){ }
};

class lobo : public mamiferos {
public:
	lobo() {
		name = "Wolfi";
		pelaje = true;
		bones = 320;
	}
	void move() { };
};

class leon : public mamiferos {
public:
	leon() {
		name = "Leonidas";
		pelaje = true;
		bones = 525;
	}
	void move() { };
};

class tiburon : public peces {
public:
	tiburon() {
		name = "Tiburoncin";
		num_aletas = 6;
	}
	void move() { }
};

class medusa : public invertebrados {
public:
	medusa() {
		name = "Meducin";
		concha = false;
	}
	void move() { };
};

class babosa : public invertebrados {
public:
	babosa() {
		name = "Babocin";
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

	std::vector<ANIMALES*> vec_anim;
	vec_anim.push_back(&Lobito);
	vec_anim.push_back(&Pulpito);
	vec_anim.push_back(&Leoncito);
	vec_anim.push_back(&Tiburoncin);
	vec_anim.push_back(&Medusita);
	vec_anim.push_back(&Babosita);



	return 0;
}