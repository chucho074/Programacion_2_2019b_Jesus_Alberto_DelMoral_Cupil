#include "Book.h"



Book::Book()
{
}

Book::Book(string T, string A, string E, string F, int P) {

	Titulo = T;
	Autor = A;
	Editorial = E;
	Formato = F;
	Publicacion = P;

}


Book::~Book()
{
}



//Mayor que (Por nodos)
bool Book::operator > (Book & P) {
	if (Titulo != P.Titulo) {
		if (P.Titulo < Titulo) {
			return Titulo > P.Titulo;
		}
	}

	else if (Autor != P.Autor) {
		if (P.Autor < Autor) {
			return Autor > P.Autor;
		}
	}

	else if (Editorial != P.Editorial) {
		if (P.Editorial < Editorial) {
			return Editorial > P.Editorial;
		}
	}

	else if (Formato != P.Formato) {
		if (P.Formato < Formato) {
			return Formato > P.Formato;
		}
	}

	else if (Publicacion != P.Publicacion) {
		if (P.Publicacion < Publicacion) {
			return Publicacion > P.Publicacion;
		}
	}

	else {
		return !(Titulo > P.Titulo);
	}
}

//Menor que (Por nodos)
bool Book::operator < (Book & Per) {
	return Titulo < Per.Titulo;
}

//Igual que (Por nodos)
bool Book::operator == (Book & P) {
	if (Titulo == P.Titulo && Autor == P.Autor && Editorial == P.Editorial && Formato == P.Formato && Publicacion == P.Publicacion) {
		return true;
	}
	else {
		return false;
	}
}

//Mayor que (Solo por apellido)
bool Book::operator > (std::string s) {
	return Titulo > s;
}

//Menor que (Solo por apellido)
bool Book::operator < (std::string s) {
	return Titulo < s;
}

//Igual que (Solo por apellido)
bool Book::operator == (std::string ap) {
	return Titulo == ap;
}

//Imprimir datos del tipo de dato
std::ostream & operator << (std::ostream & os, Book & P) {
	os << "\t" << P.Titulo << "\n\t" << P.Autor << "\n\t"<<P.Editorial <<"\n\t"<<P.Formato<<"\n\t" << P.Publicacion << std::endl;
	return os;
}