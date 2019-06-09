#include "Utilerias.h"

//Funcion Quicksort implementada a vector de animales
void f_quicksort(unsigned short izq, vector<ANIMALES*> & vectorx, unsigned short der, OPCIONES o, vector<char> opciones) {
	unsigned short i, j, piv;
	ANIMALES * temp = nullptr;
	i = izq;
	j = der;
	unsigned short mid = (izq + der) / 2;
	piv = vectorx[mid]->return_age();


	do {
						//Nombre
		if (o == NOMBRE){
			while ((vectorx[mid]->return_name() >= vectorx[i]->return_name()) && (j <= der) && i < der) {
				if (vectorx[mid] ->return_name() == vectorx[i]->return_name()) {
					if (opciones[0]=='N') {
						f_quicksort(i, vectorx, j, EDAD, opciones);
					} 
					else if (opciones[1]== 'N') {
						f_quicksort(i, vectorx, j, SALUD, opciones);
					}
				}
				else if (vectorx[mid] -> return_name() > vectorx[i]->return_name()) {
					i++;
				}
			}

			while ((vectorx[mid]->return_name() < vectorx[j]->return_name() && (j > izq))) {
				j--;
			}

			if (i <= j) {
				temp = vectorx[i];
				vectorx[i] = vectorx[j];
				vectorx[j] = temp;
				i++;
				j--;
			}
		}
	
						//Edades
		else if (o== EDAD)
		{
			while ((piv >= vectorx[i]->return_age()) && (j <= der) && i < der) {
				if (piv == vectorx[i]->return_age()){
					if (opciones[0] == 'E') {
						f_quicksort(i, vectorx, j, NOMBRE, opciones);
					}
					else if (opciones[1] == 'E') {
						f_quicksort(i, vectorx, j, SALUD, opciones);
					}
				}
				else if (piv > vectorx[i] ->return_age()) {
					i++;
				}
			}

			while ((piv < vectorx[j]->return_age() && (j > izq))) {
				j--;
			}

			if (i <= j) {
				temp = vectorx[i];
				vectorx[i] = vectorx[j];
				vectorx[j] = temp;
				i++;
				j--;
			}
		}

				//Salud
		else if (o== SALUD)
		{
			while ((piv >= vectorx[i]->return_healt()) && (j <= der) && i < der) {
				if (piv == vectorx[i]->return_healt() && opciones[0]=='S') {
					f_quicksort(i, vectorx, j, EDAD, opciones);
				}
				else if (piv > vectorx[i]->return_healt()) {
					i++;
				}
			}

			while ((piv < vectorx[j]->return_age() && (j > izq))) {
				j--;
			}

			if (i <= j) {
				temp = vectorx[i];
				vectorx[i] = vectorx[j];
				vectorx[j] = temp;
				i++;
				j--;
			}
		}
		

	} while (i <= j);

	if (izq < j) {
		f_quicksort(izq, vectorx, j, o, opciones);
	}
	if (der > i) {
		f_quicksort(i, vectorx, der, o, opciones);
	}
}


