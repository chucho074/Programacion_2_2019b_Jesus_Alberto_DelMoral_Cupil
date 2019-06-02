#include "Utilerias.h"


//Funcion Quicksort implementada a vector de animales
void f_quicksort(unsigned short izq, vector<ANIMALES*> & vectorx, unsigned short der) {
	unsigned short i, j, piv;
	ANIMALES * temp = nullptr;
	i = izq;
	j = der;
	piv = vectorx[(izq + der) / 2] ->return_age();

	do {
		while ((piv > vectorx[i]->return_age()) && (j <= der) && i<der ) {
			i++;
		}
		while ((piv< vectorx[j]->return_age() && (j > izq))) {
			j--;
		}
		if (i <= j) {
			temp = vectorx[i];
			*vectorx[i] = *vectorx[j];
			*vectorx[j] = *temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (izq < j) {
		f_quicksort(izq, vectorx, j);
	}
	if (der > i) {
		f_quicksort(i, vectorx, der);
	}
}


