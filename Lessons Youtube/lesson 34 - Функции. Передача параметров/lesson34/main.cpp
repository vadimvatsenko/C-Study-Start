/*���� 34 �������� ���������� � ������� �� ��������*/

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