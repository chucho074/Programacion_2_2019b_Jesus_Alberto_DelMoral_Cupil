#include <iostream>

using namespace std;
using std::cout;
using std::cin;
using std::endl;

/*int main() {
	cout << "Set a number" << endl;
	int num1;
	cin >> num1;
	if (num1 == 0) {
		cout << "El factorial es 0" << endl;
		cin.get();
	}
	else if (num1 != 0) {
		for (int i = num1 -1; i != 0; i--) {
			num1 = num1*i;
		}
		cout <<"El Factorial es igual a "<< num1 << endl;
		cin.get();
	}
	cin.get();
	return 0;
}*/

int fact(int i) {
	return i <= 1 ? 1 : i * fact(i - 1);
}

int main() {
	
	cout<<fact(5);
	cin.get();
	return 0;

}