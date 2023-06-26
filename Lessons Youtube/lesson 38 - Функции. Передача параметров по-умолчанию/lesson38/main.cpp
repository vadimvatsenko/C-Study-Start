#include<iostream>

using namespace std;

void foo(int a = 5) {
	for (int i = 0; i < a; i++)
	{
		cout << "#" << endl;
	}
}

void main() {
	foo();
}