
#include<iostream>
using namespace std;

template <typename T1, typename T2> 
T1 Summ(T1 a, T2 b, T1 c) {
	return a + b + c ;
}



template <typename P1, typename P2>
void Summ2(P1 a, P2 b) {
	cout << a << endl;
	cout << b << endl;
}



void main() {
	cout << Summ(5, 6, 7) << endl;
	cout << Summ(4.2, 5, 8.5) << endl;
	cout << Summ(3, 50, 6) << endl;
}

