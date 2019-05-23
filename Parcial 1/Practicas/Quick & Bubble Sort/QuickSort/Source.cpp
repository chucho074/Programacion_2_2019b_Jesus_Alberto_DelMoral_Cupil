#include <iostream>
#include <vector>

using std::vector;

void f_bubblesort(vector<short> & vectorx);
void f_quicksort(short izq, vector<short> & vectorx, short der);
void f_printvec(vector<short> vectorx);

int main() {
	//Pasar los datos a las funciones
	vector<short> vector_num {8,1,5,6,3,2,4,7,9};
	//f_bubblesort(vector_num);
	f_quicksort(0,vector_num, vector_num.size()-1);
	f_printvec(vector_num);
	std::cin.get();
	return 0;
}

void f_printvec(vector<short> vectorx) {
	for (int i = 0; i < vectorx.size(); i++) {
		std::cout << vectorx[i] << " ";
	}
}


void f_bubblesort(vector<short> & vectorx) {
	/*
	TODO:
	Improve algorithm: 
	it is always swapping variables
	it is doing more iterations than needed
	add flag to check if it's already sorted
	*/
	short int temp;
	short int tama = vectorx.size();
	bool flag;
	for (int i = 1; i < tama; i++) {
		flag = false;
		
		for (int j = tama-1; j >= i; j--) {
			if (vectorx[j - 1] < vectorx[j]) {
				temp = vectorx[j - 1];
				vectorx[j - 1] = vectorx[j];
				vectorx[j] = temp;
				flag = true;
			}
		}
		if (flag == false) {
			break;
		}
		
		
	}
	//Imprime en pantalla como quedo el vector
	f_printvec(vectorx);
}


void f_quicksort(short izq, vector<short> & vectorx, short der){
	short temp,i,j,piv;
	i = izq;
	j = der;
	piv = vectorx[(izq + der) / 2];

	do {
		while ((piv>vectorx[i])/*&&(j<=der)*/) {
			i++;
		}
		while ((piv<vectorx[j])/*&&(j>izq)*/) {
			j--;
		}
		if (i <= j) {
			temp = vectorx[i];
			vectorx[i] = vectorx[j];
			vectorx[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);

	if (izq < j) {
		f_quicksort(izq, vectorx,j);
	}
	if (der>i) {
		f_quicksort(i, vectorx, der);
	}
}
