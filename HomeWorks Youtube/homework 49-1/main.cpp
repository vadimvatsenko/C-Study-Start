//ДЗ. Напишите функцию, меняющую местами значения с помощью указателей

#include <iostream>

using namespace std;

void Swap(int* pa, int* pb) {
	int a = *pa;
	(*pa) = *pb;
	(*pb) = a;
}

void main() {
	int a = 6, b = 10;
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "==========" << endl;

	Swap(&a, &b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}