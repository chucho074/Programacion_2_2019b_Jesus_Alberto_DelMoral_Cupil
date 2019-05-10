#include <iostream>
#include <vector>

using std::vector;

void f_bubblesort(vector<short int> vectorx);
void f_quicksort(vector<short int> vectorx);

int main() {
	vector<short int> vector_num {8,1,5,6,3,2,4,7,9};
	f_bubblesort(vector_num);
	std::cin.get();
	return 0;
}



void f_bubblesort(vector<short int> vectorx) {
	short int temp, menor;
	short int tama = vectorx.size();
	for (int i = 0; i < tama; i++) {
		menor = i;
		for (int j = i+1; j < tama; j++) {
			if (vectorx[j] < vectorx[menor]) {
				menor = j;
			}
		}
		temp = vectorx[i];
		vectorx[i] = vectorx[menor];
		vectorx[menor] = temp;
	}

	for (int i = 0; i < tama; i++) {
		std::cout << vectorx[i] << " ";
	}
}


void f_quicksort(vector<short int> vectorx){
	short int temp;
	short int tama = vectorx.size() ;
	short int pos;
	//

	for (int i = 0; i < tama; i++) {
		pos = i;
		temp = vectorx[i];
		
		while ((pos > 0) && (vectorx[pos - 1] > temp)) {
			vectorx[pos] = vectorx[pos - 1];
			pos--;
		}
		
			vectorx[pos] = temp;
		
	}

	for (int i = 0; i < tama; i++) {
		std::cout << vectorx[i] << " ";
	}

}
