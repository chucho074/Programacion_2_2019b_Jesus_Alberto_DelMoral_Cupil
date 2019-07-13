#include "Librerias.h"


int main() {
	bool menu = true;
	char ans;
	SingleList Sl;
	//////////////////////////////////////////////////////////
	//Just a Test assfak
	SingleNode * N;
	

	while (menu = true) {
		cin.clear();
		cin.get(ans);
		switch (ans) {
		case '0': {
			menu = false;
			break;
		}
		case '1': {
			N = new SingleNode;
			//cin >> *N;
			cin >> N->name;
			cin >> N->lastName;
			cin >> N->birthDay;
			cin >> N->birthMonth;
			cin >> N->birthYear;
			cin >> N->email;
			Sl.push(N);
			N = nullptr;
			//delete N;
			break;
		}

		default: {
			main();
			break;
		}
		}
	}
	return 0;
}