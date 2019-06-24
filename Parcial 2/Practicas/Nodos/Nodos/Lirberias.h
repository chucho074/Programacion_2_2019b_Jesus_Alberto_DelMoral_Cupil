/*
	Librerias.h 
		v1.2a
*/

		//Includes
		//Includes
#pragma once
#include <iostream>
#include <string>
#include <vector>


		//Usings
using std::string; 
using std::vector;
using std::cout;
using std::cin;
using std::endl;



		//Structs

//Nodo simple
struct Nodo {
	string name;
	int age;
	Nodo *next;
};

//Nodo para lista doblemente enlazada
struct NodoDoble {
	string name;
	int age;
	NodoDoble *next;
	NodoDoble *before;
};

