/*Домашнее задание
Программа которая гинерирует случайные числа и заполняет этими случайными числами массив
на 10 элементов, диапазон от 0 до 20ти. Элементы должны быть уникальными*/
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



	for (int i = 0; i < SIZE; i++)
	{

		cout << arr[i] << endl;

	}


}

