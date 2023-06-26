#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int Var1, Var2;
    const char TAB = '\t';

    cout << "Enter 1st number: ";
    cin >> Var1;
    

    cout << "Enter 2nd number" << endl;
    cin >> Var2;

    cout << "1st number = " << Var1 <<TAB << "2nd number = " <<Var2<< endl;
}
