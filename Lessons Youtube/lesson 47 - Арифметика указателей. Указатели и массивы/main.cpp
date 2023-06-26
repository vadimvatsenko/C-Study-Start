// ”рок 47 ”казатели и массивы
#include <iostream>

using namespace std;

void main() {
	const int SIZE = 5;
	int arr[SIZE]{ 4,55,79,1,4 };

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << endl;
	}

	cout << "=====================" << endl;

	int* pArr = arr;

	cout << "arr " << arr << endl;
	cout << "pArr " << pArr << endl;

	cout << "=====================" << endl;


	for (int i = 0; i < SIZE; i++) {
		cout << pArr[i] << endl;
		cout << *(pArr+i) << endl; // аналогична€ запись
	}

}