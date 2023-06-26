// Напишите программу которая проверяет число на чётность

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    int a;
	cout << "Enter number, please" << endl;
    cin >> a;

	switch (a)
	{
	case 1:
		cout << "You enter " << a << endl;
		break;
	case 2: 
		cout << " You enter " << a << endl;
		break;
	default:
		cout << "Error" << endl;
		break;
	}
}