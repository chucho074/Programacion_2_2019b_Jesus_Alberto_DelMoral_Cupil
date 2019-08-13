#pragma once

template <class T>
class Nodes {
public:
	Nodes() {};
	~Nodes() {};

	void virtual preO() {};
		  
	void virtual inO() {};
		  
	void virtual postO() {};
		  
	void virtual add(Nodes<T>*) {};

	Nodes<T> virtual serch(Nodes<T>*, T) {};

	//void virtual erase(T delData) {};



	bool virtual operator < (Nodes<T> & a) {};

	bool virtual operator > (Nodes<T> & a) {};
};

