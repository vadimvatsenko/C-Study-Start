//Урок 48. Передача параметров в функцию. Передача указателя в функцию
#include <iostream>

using namespace std;

void Foo(int* pa, int *pb, int *pc) {
	(*pa) = 555;

	(*pb)++;

	(*pc) = -20;
}

void main() {

	int a = 0, b = 0, c = 1;

	cout << "a " << a << endl;
	cout << "b " << b << endl;
	cout << "c " << c << endl;

	cout << "foo" << endl;

	Foo(&a, &b, &c);

	cout << "a " << a << endl;
	cout << "b " << b << endl;
	cout << "c " << c << endl;

}