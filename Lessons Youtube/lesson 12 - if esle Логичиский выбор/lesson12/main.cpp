// ”рок є12 if else
//

#include <iostream>
using namespace std;

void main()
{
    setlocale(LC_ALL, "ru");
    bool isRain = false;

    if (isRain) 
    {
        cout << "»дЄт дождь!" << endl;
    }
    else {
        cout << "ястна€ погода" << endl;
    }
    //////////////////////////////////////
    int a;
    cout << "¬ведите число" << endl;
    cin >> a;

    if (a > 5)
    {
        cout << "„исло " << a << " больше 5" << endl;
    }
    else if (a == 5)
    {
        cout << "„исло " << a << " равно 5" << endl;
    }
    else
    {
        cout << "„исло " << a << " меньше 5" << endl;
    }
        
}

