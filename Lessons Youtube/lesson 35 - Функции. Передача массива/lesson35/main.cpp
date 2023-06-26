/*Урок 35 Передача массива в функцию*/

#include<iostream>

using namespace std;

void FillArray(int arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

void PrintArray(int arr[], const int size) {
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

void main() {
	const int SIZE = 10;

	int arr[SIZE];

	int a = sizeof(arr);

	cout << "size = " << a  << endl;

	FillArray(arr, SIZE);
	PrintArray(arr, SIZE);


}