#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;

class User {
public:
	User(string apellido, string nombre, int edad);
	string apellido;
	string nombre;
	int edad;

	User *izq = nullptr;
	User *der = nullptr;

	~User();



	void preO();

	void inO();

	void postO();

	void add(User *newUser);



};

