/*
* Домашнее задание
* Введите три числа и выведете на экран значение суммы произведения 
и среднее арифметичиское этих чисел
*/

#include <iostream>
using namespace std;

int main()
{

	int a, b, c, summ, product;
	cout << "Enter tree numbers: " << endl;
	cin >> a >> b >> c ;
	summ = a + b + c;
	product = a * b * c;
	double average = (double)(a + b + c) / 3;
	cout << "summ of numbers: " << summ << endl
		<< "product of numbers: " << product << endl
		<< "average of numbers: " << average << endl;
}
