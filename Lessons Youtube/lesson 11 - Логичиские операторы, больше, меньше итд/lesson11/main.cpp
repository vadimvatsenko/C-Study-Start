// Крок №11 Логичиские операторы

#include <iostream>
using namespace std;

void main()
{
    cout << (4 > 5) << endl;
    cout << (4 < 5) << endl;

    cout << (5 <= 5) << endl;
    cout << (5 == 5) << endl;
    cout << (5 != 5) << endl;

    cout << ((5 == 5) && (4 == 4)) << endl;
    cout << ((5 == 5) || (4 < 4)) << endl;

    cout << !(5 == 5) << endl;// 0 false
}

