#include<iostream>
using namespace std;

int Summ(int a, int b, int c) {
	a++;
	return a + b + c;
}
int Summ(int a, int b) {
	return a + b;
}

double Summ(double a, double b) {
	return a + b;
}

void main() {
	cout << Summ(5, 6) << endl;
	cout << Summ(4.2, 10.9) << endl;
	cout << Summ(3, 50, 6) << endl;
}