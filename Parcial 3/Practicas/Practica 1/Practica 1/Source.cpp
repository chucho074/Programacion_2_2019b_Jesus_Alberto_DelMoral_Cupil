#include <iostream>	

class Vector {
private:
	int x;
	int y;

public:
	Vector(int aX, int aY) : x(aX), y(aY) {};
	Vector operator + (const Vector & v) {
		Vector res(x + v.x, y + v.y);
		return res;
	};
	friend std::ostream & operator << (std::ostream &, const Vector &);
	friend std::istream & operator >> (std::istream &, Vector &);
};


std::ostream & operator << (std::ostream & out, const Vector & v) {
	out << v.x << ", " << v.y;
	return out;
}

std::istream & operator >> (std::istream & inp, Vector & v) {
	std::cout << "Ingrese x" << std::endl;
	inp >> v.x;
	std::cout << "Ingrese y" << std::endl;
	inp >> v.y;
	return inp;
}

int main() {
	Vector v1(4, 6);
	Vector v2(6, -6);

	//Vector res = v1 + v2;

	std::cin >> v1;

	std::cout << v1 << " + " << v2 << " = " <</*res*/v1 + v2 << std::endl;

	Vector * ptr1 = &v1;

	Vector * ptr2 = &v2;

	//Con el * hace referencia a su tipo de valor xd
	std::cout << *ptr1 << " + " << *ptr2 << " = " <</*res*/ *ptr1 + *ptr2 << std::endl;

	return 0;
}