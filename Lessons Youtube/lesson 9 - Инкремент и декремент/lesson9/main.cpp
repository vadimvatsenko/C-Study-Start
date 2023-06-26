//Урок №9 Инкремент и дектремент. Постфиксный и префиксный

#include <iostream>
using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	b--;
	a += a;
	cout << a << endl << b << endl;

	int c = 1, d;
	d = ++c * c;
	cout << d << endl; //4
}
