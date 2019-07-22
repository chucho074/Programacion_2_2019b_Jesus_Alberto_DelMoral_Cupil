#include <iostream>


int Sequence(int Init, int Limit, int Steps) {
	//Se obtiene la cantidad de veces que se va a sumar el numero sin contar el primer dato
	int Iterator = (Limit - Init) / Steps;
	//Se obtiene el resultado en base al iterador
	int Result = (Steps * ((Iterator * (Iterator + 1)) / 2)) + (Init * (Iterator + 1));
	std::cout << Result;
	return Result;
}


int main() {
	int x, y, z;
	std::cin>>x;
	std::cin>>y;
	std::cin>>z;
	Sequence(x, y, z);
	
	std::cin.ignore();
	std::cin.get();
	return 0;
}