// ���� 46 ������. ���������
#include <iostream>

using namespace std;

void main() {
	int a = 5;
	
	int *px = &a;

	int *px2 = &a;

	cout << *px << endl; // �� ��� ����� � �
	cout << px << endl;// �����

	cout << "px " << px << endl;
	cout << "px2 " << px2 << endl;

	*px2 = 2;

	cout << a << endl;


}