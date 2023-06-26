// Напишите программу которая проверяет число на чётность

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Enter number" << endl;
    cin >> number;

    if (number % 2 == 0)// работаеть только с целыми числами
    {
        cout << "Success" << endl;
    }
    else {
        cout << "Error" << endl;
    }
}