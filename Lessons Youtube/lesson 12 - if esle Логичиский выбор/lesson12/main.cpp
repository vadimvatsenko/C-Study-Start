// ���� �12 if else
//

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    bool isRain = false;

    if (isRain) 
    {
        cout << "��� �����!" << endl;
    }
    else {
        cout << "������ ������" << endl;
    }
    //////////////////////////////////////
    int a;
    cout << "������� �����" << endl;
    cin >> a;

    if (a > 5)
    {
        cout << "����� " << a << " ������ 5" << endl;
    }
    else if (a == 5)
    {
        cout << "����� " << a << " ����� 5" << endl;
    }
    else
    {
        cout << "����� " << a << " ������ 5" << endl;
    }
        
}

