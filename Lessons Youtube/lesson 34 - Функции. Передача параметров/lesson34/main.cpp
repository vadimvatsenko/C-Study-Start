/*Урок 34 Передача параметров в функцию по значению*/

#include<iostream>

using namespace std;

int Foo(int a) {
	return ++a;
}

void main() {
	int a = 1;

	a = Foo(a);

	cout << a << endl;

}