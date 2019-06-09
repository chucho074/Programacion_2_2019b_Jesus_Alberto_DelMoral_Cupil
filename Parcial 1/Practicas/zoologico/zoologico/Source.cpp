#include "Animales.h"
#include "Utilerias.h"


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
		concha = false;
		alas = false;
		pelaje = false;

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
		name = "Tiburoncin";
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

class babosa : public invertebrados {
public:
	babosa() {
		concha = true;
		alas = false;
		}
	void move() { }
};


int main() {
	lobo Lobito;
	Lobito.set_name("Wolfi");
	Lobito.set_age(25);
	Lobito.set_healt(good);
	pulpo Pulpito;
	Pulpito.set_name("Pulpi");
	Pulpito.set_age(5);
	Pulpito.set_healt(bad);
	leon Leoncito;
	Leoncito.set_name("Leonidas");
	Leoncito.set_age(30);
	Leoncito.set_healt(critical);
	tiburon Tiburoncin;
	Tiburoncin.set_name("Tiburoncin");
	Tiburoncin.set_age(15);
	Tiburoncin.set_healt(good);
	medusa Medusita;
	Medusita.set_name("Meducin");
	Medusita.set_age(3);
	Medusita.set_healt(good);
	babosa Babosita;
	Babosita.set_name("Babocin");
	Babosita.set_age(3);
	Babosita.set_healt(critical);

	vector<ANIMALES*> vec_anim;
	vec_anim.push_back(&Lobito);
	vec_anim.push_back(&Pulpito);
	vec_anim.push_back(&Leoncito);
	vec_anim.push_back(&Tiburoncin);
	vec_anim.push_back(&Medusita);
	vec_anim.push_back(&Babosita);
	vec_anim[0]->return_age();

	

	std::cout << "Elija la forma de ordenamiento deseada:\n";
	std::cout << " 0 .- Nombre-Edad-Salud \n 1 .- Edad-Nombre-Salud \n 2 .- Salud-Edad-Nombre" << std::endl;
	char f;
	std::cin >> f;
	vector<char> opciones;

	switch (f) {
	case '0': {
		opciones = { 'N', 'E', 'S' };
		f_quicksort(0, vec_anim, vec_anim.size() - 1, NOMBRE, opciones);
	}
	case '1': {
		opciones = { 'E','N','S' };
		f_quicksort(0, vec_anim, vec_anim.size() - 1, EDAD, opciones);
	}
	case '2': {
		opciones = { 'S','E','N' };
		f_quicksort(0, vec_anim, vec_anim.size() - 1, SALUD, opciones);
	}
	default:
		break;
	}
	


	std::cout << " Hey men, si ves esto, no hay errores. \n Ve a descansar, lo mereces, wapo :D\n\nreturn 0;" << std::endl;
	return 0;
}

