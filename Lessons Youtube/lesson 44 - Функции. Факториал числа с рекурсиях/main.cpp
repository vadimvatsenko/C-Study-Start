// Урок 44 Рекурсия Факториал
// N! = N + (N-1)!
#include<iostream>
using namespace std;

int Fact(int N) {
	if (N == 0) {
		return 0;
	}
	if (N == 1) {
		return 1;
	}
	return N*Fact(N - 1);

}

void main() {
	cout << Fact(6) << endl;

}