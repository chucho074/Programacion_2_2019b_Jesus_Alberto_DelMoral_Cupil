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
	~Arbol();


	void preO();

	void inO();

	void postO();

	void add(User<T>*&);

	void balance(User<T>*);

	//void erase(User * First);

	void Delete(string);

	void rotIzq(User<T>*);

	void rotDer(User<T>*);

	void doblRotDer(User<T>*);

	void doblRotIzq(User<T>*);


};

