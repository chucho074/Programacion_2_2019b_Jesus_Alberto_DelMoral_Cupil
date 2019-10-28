#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cin;
using std::cout;

class Book {
public:
	Book();
	Book(string, string, string, string, int);
	~Book();

	string Titulo;
	string Autor;
	string Editorial;
	string Formato;
	int Publicacion;

	bool operator > (Book &);		
	bool operator < (Book &);		
	bool operator == (Book &);		
	bool operator > (string);			
	bool operator < (string);			
	bool operator == (string);			
	friend std::ostream & operator << (std::ostream &, Book &);	
};

