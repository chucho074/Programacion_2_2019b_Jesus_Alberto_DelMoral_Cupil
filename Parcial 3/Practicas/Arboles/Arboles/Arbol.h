#pragma once
#include "User.h"

template <class T>
class Arbol : public User<T> {
private:
	unsigned int cont = 0;
public:
	User<T> * arbolito;
	
	Arbol();
	Arbol(User<T> * arbol);
	//Arbol(string Name, string LastName, int Age);
	~Arbol();


	void preO();

	void inO();

	void postO();

	void add(User<T> *&newUser);

	void balance(User<T> * First);

	//void erase(User * First);

	//void Delete(string);

	void rotIzq(User<T> * a);

	void rotDer(User<T> * a);


};

