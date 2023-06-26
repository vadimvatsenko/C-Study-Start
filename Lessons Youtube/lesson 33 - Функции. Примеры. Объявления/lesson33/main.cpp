/*Урок 33 Функции*/
#include<iostream>
using namespace std;

void foo(int i) {
	cout << "Function okey " << i << endl;
}

int Sum(int a, int b) {
	int c;
	c = a + b;
	return c;
}
void main() {
	foo(5);
	foo(10);

	for (int i = 0; i < 20; i++)
	{
		foo(i);
	}

	int fooSumm = Sum(10, 5);
	cout << fooSumm << endl;
}