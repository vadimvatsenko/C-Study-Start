/*�������� ���������, ������� ������� ����� ���� �� ������ ����� � ��������� �������� �������������*/
#include<iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "ukr");
	int firstNumber, secondNumber;
	cout << "Enter two numbers" << endl;
	cin >> firstNumber >> secondNumber;

	while (firstNumber < secondNumber) {
		firstNumber++;
		if (firstNumber % 2 != 0) {
			
			cout << firstNumber << "-�� ����� �����" << endl;
			cout << "���� ������ �����" << (firstNumber += firstNumber) << endl;
		}

		}

	}

	

