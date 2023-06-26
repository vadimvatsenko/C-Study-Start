#include<iostream>

using namespace std;

int main() {
	int width, heigth;
	char symbol;

	cout << "Enter height = ";
	cin >> heigth;

	cout << "Enter width = " ;
	cin >> width;

	cout << "Enter Symbol = " ;
	cin >> symbol;

	for (int j = 0; j < heigth; j++)
	{
		cout << endl;
		for (int i = 0; i < width; i++)
		{
			cout << symbol;
		}
	}

	
}