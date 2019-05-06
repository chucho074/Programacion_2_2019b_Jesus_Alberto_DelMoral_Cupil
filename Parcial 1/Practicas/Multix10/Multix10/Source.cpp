#include <iostream>

void f_multi(int num) {
	num = num + num + num + num + num + num + num + num + num + num;
	std::cout << num;
}

void f_pareinpar(short int num){
	
}

int main() {
	f_multi(5);
	std::cin.get();
	return 0;
}