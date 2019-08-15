#pragma once
#include <string>
using std::string;

template <class T>
class Arbol {
public:

	Arbol() {};

	~Arbol() {};

	void virtual preO() = 0;

	void virtual inO() = 0;

	void virtual postO() = 0;

	void virtual add(Nodes<T>*&) = 0;

	void virtual Delete(string) = 0;

	
};

