#include "Utilerias.h"

//Funcion Quicksort implementada a vector de animales
void f_quicksort(unsigned short izq, vector<ANIMALES*> & vectorx, unsigned short der, OPCIONES O) {
	unsigned short i, j, piv;
	ANIMALES * temp = nullptr;
	i = izq;
	j = der;
	unsigned short mid = (izq + der) / 2;
	piv = vectorx[mid]->return_age();

	do {
		if (O == NOMBRE)
		{
			while ((vectorx[mid]->return_name() >= vectorx[i]->return_name()) && (j <= der) && i < der) {
				if (vectorx[mid] ->return_name() == vectorx[i]->return_name()) {
					//Nombre
					f_quicksort(i, vectorx, j, SALUD);
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
	

		else if (O == EDAD)
		{
			while ((piv >= vectorx[i]->return_age()) && (j <= der) && i < der) {
				if (piv == vectorx[i] -> return_age() ) {
					//Nombre
					f_quicksort(i,vectorx,j,NOMBRE);
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

		else if (O == SALUD)
		{
			while ((piv >= vectorx[i]->return_age()) && (j <= der) && i < der) {
					i++;
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
		f_quicksort(izq, vectorx, j, O);
	}
	if (der > i) {
		f_quicksort(i, vectorx, der, O);
	}
}


