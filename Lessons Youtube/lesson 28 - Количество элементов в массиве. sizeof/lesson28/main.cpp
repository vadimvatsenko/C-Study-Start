// Урок 28 sizeof в массивах
#include<iostream>

using namespace std;

int main() {

	int arr2[]{ 1,6,8,10,55,77,88 };
	int a = sizeof(arr2);
	int b = sizeof(int);

	cout << a/b << endl;

	for (int i = 0; i < a/b; i++)
	{
		cout << arr2[i] << endl;

	}

}