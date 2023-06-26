#include <iostream>
using namespace std;

int main() {

	int symbolCount;
	char symbol;
	int lineType;
	int index = 0;

	cout << "Enter counts in line" << endl;
	cin >> symbolCount;

	cout << "Enter symbol" << endl;
	cin >> symbol;

	cout << "Enter type of line" << endl
		<< "1 - Vertical" << endl
		<< "2 - Horizontal" << endl;
	cin >> lineType;

	if (lineType != 1 && lineType != 2) {
		cout << "Error" << endl;
		return 0;
	}

	while (index < symbolCount)
	{
		index++;
		if (lineType == 1)
		{
			cout << symbol << endl;
		}
		if (lineType == 2)
		{
			cout << symbol;
		}
		
	}

	cout << endl << endl;


}