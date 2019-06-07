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
void f_quicksort(unsigned short, vector<ANIMALES*> &, unsigned short, OPCIONES O);