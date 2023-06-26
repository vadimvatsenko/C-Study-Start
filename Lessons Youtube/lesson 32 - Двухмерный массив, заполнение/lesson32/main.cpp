//Урок 32 Двумерные массивы вывод. Заполнение. Двумерный массив циклы. C++ для начинающих.
#include<iostream>

using namespace std;

int main() {
	const int ROW = 3;
	const int COL = 8;

	int arr[ROW][COL];

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}

	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	


}