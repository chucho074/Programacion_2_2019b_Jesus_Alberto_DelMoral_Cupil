#pragma once
#include "Librerias.h"
#include "Animales.h"

enum OPCIONES
{
	NOMBRE,
	EDAD,
	SALUD
};



//Funcion del quicksort
void f_quicksort(unsigned short izq, vector<ANIMALES*> & vectorx, unsigned short der, OPCIONES o, vector<char> opciones);