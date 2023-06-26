// Урок 27 Вывод массива. Массивы и циклы
#include<iostream>

using namespace std;

int main() {
	const int size = 10;

	int arr[size]{6,7,8,9,50,16,20,28,96,100};

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}

	const int size2 = 5;

	int arr2[size2];

	for ( int i = 0; i < size2; i++)
	{
		arr2[i] = i;
		cout << arr2[i] << endl;
	}

}