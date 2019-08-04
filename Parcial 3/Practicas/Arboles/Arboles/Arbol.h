#pragma once
#include "User.h"
class Arbol : public User {
private:
	unsigned int cont = 0;
public:
	User * arbolito;
	
	Arbol();
	Arbol(string Name, string LastName, int Age);
	~Arbol();


	void preO();

	void inO();

	void postO();

	void add(User *&newUser);

	void balance(User * First);

	void erase(User * First);

	void Delete(string);


};

