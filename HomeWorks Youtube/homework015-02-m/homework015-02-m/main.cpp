/*�������� ���������, ������� ������� ����� ���� �� ������ ����� � ��������� �������� �������������*/
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");
	int sum = 0;
	int rangeBegin, rangeEnd;

	cout << "Enter begin range" << endl;
	cin >> rangeBegin;
	cout << "Enter end range" << endl;
	cin >> rangeEnd;

	do
	{
		rangeBegin++;
		if (rangeBegin % 2 != 0)
		{
			sum += rangeBegin;
		}
		
	} while (rangeBegin <= rangeEnd); // ����� ���������� ���� ���� ����� �������
	cout << "sum of all odd numbers = " << sum << endl;

}


