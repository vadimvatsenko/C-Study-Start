//Урок №15 Цикл do while

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	int a = 18;

	do
	{
		cout << "a = " << a << endl;
		a++;
	} while (a < 20);

}