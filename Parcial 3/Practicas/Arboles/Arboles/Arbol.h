#pragma once

class Arbol {
public:

	Arbol() {};

	virtual ~Arbol() = 0;

	virtual void preO() {};

	virtual void inO() {};

	virtual void postO() {};

	virtual void add() {};

	virtual void Delete() {};
};

