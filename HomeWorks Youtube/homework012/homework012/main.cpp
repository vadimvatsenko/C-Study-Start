// �������� ��������� ������� ��������� ����� �� ��������

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    int number;
    cout << "Enter number" << endl;
    cin >> number;

    if (number % 2 == 0)// ��������� ������ � ������ �������
    {
        cout << "Success" << endl;
    }
    else {
        cout << "Error" << endl;
    }
}