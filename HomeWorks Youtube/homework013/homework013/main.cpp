// Напишите программу которая проверяет число на чётность

#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");
	int a, b;
	char c;
	cout << "Enter number 1st number please" << endl;
	cin >> a;
	cout << "Enter number 2nd number please" << endl;
	cin >> b;
	cout << "Enter *, /, + or -, please" << endl;
	cin >> c;


	switch (c)
	{
	case '*':
		cout << "Total number " << a * b << endl;
		break;
	case '/':
		cout << "Total number " << (float)a / b << endl;
		break;
	case '+':
		cout << "Total number " << a + b << endl;
		break;
	case '-':
		cout << "Total number " << a - b  << endl;
		break;

	default:
		cout << "Please enter * / + or -" << endl;
		break;
	}
}