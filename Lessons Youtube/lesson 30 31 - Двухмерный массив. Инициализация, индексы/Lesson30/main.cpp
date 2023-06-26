//Урок 30-31 Двухмерные массивы
#include<iostream>

using namespace std;

int main() {
	const int ROW = 3;
	const int COL = 4;
	//int arr[ROW][COL]{};

	int arr[ROW][COL]
	{
		{2,4,6,8},
		{15,6, 80, 13}
	};

	cout << arr[1][1] << endl;

	arr[1][1] = 5;
	arr[0][3] = 66;

	cout << arr[1][1]  << endl;
	cout << arr[0][3] << endl;

	int a = 1;



}