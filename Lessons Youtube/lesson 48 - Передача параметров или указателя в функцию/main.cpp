//���� 48. �������� ���������� � �������. �������� ��������� � �������
#include <iostream>

using namespace std;

void Foo(int *pa) {
	cout << *pa << endl;
	(*pa)++;
}

void main() {

	int a = 0;

	cout << a << endl;

	Foo(&a);

	cout << a << endl;

}