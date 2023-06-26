/* Самое маленькое число в массиве*/

#include<iostream>
#include<ctime>

using namespace std;

int main() {

	srand(time(NULL));

	int const SIZE = 10;

	int arr[SIZE];


	bool alreadyInArr;

	for (int i = 0; i < SIZE; ) // убираем i++
	{
		alreadyInArr = false;
		int random = rand() % 20;// генерируется 10 разных значений

		for (int j = 0; j < i; j++)// 
		{
			if (arr[j] == random) {
				alreadyInArr = true;
				break;
			}

		}
		if (!alreadyInArr) {
			arr[i] = random;
			i++; // ставим сюда i++
		}
	}


	int minValue = arr[0];// первое число в массиве

	for (int i = 0; i < SIZE; i++ )
	{
		if (arr[i] < minValue) {
			minValue = arr[i];
		}
		cout << arr[i] << endl;
	}

	cout << "Minimal number of massive = " << minValue << endl;


}