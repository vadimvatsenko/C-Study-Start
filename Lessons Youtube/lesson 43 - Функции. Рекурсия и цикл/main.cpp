//”рок 43 –курси€ и цикл
#include<iostream>
using namespace std;

int Foo(int a) {

	if (a < 1) 
	return 0;
	a--;
	cout << a << endl;
	return Foo(a);
}

void main() {
	Foo(5);

}