/*Урок 36 Прототипы функций*/

#include<iostream>

using namespace std;

void foo(int a, int b);

void foo(int a, int b) {
	cout << "I am foo" << endl;
}

void main() {

	foo(5, 6);
}